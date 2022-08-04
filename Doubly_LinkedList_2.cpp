#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

class linked_list
{
private:
    node *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    // a . traversal
    void print()
    {
        node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    // b . insertion function
    void insert(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;
        tmp->prev = NULL;
        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tmp->prev = tail;
            tail = tail->next;
        }
    }
    // c. search function
    bool search(int n)
    {
        node *tmp = head;
        while (tmp != NULL)
        {
            if (tmp->data == n)
                return true;
            tmp = tmp->next;
        }
        return false;
    }
    // d. delete function
    void remove(int n)
    {
        node *tmp = head;
        node *prev = NULL;
        while (tmp != NULL)
        {
            if (tmp->data == n)
            {
                if (prev == NULL)
                {
                    head = tmp->next;
                    if (tmp->next != NULL)
                        tmp->next->prev = NULL;
                    else
                        tail = NULL;
                }
                else
                {
                    prev->next = tmp->next;
                    if (tmp->next != NULL)
                        tmp->next->prev = prev;
                    else
                        tail = prev;
                }
                delete tmp;
                return;
            }
            prev = tmp;
            tmp = tmp->next;
        }
    }
};

int main()
{
    linked_list a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.remove(3);
    a.print();
    a.search(2) ? cout << "found" : cout << "not found";
    return 0;
}