#include <iostream>
using namespace std;
// stack using linked list
struct node
{
    int data;
    node *next;
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
    // push
    void push(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;
        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    // pop
    int pop()
    {
        if (head == NULL)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else
        {
            node *tmp = head;
            head = head->next;
            int n = tmp->data;
            delete tmp;
            return n;
        }
    }
    // print
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
};
int main()
{
    linked_list a;
    a.push(5);
    a.push(4);
    a.push(3);
    a.push(2);
    a.push(1);
    a.print();
    a.pop();
    a.pop();
    a.print();
}