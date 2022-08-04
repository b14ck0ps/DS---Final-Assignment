#include <iostream>
using namespace std;
// queue using linked list
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
    // enqueue
    void enqueue(int n)
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
    // dequeue
    int dequeue()
    {
        if (head == NULL)
        {
            cout << "queue is empty" << endl;
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
    // traversal
    void print_q()
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
    linked_list q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.dequeue();

    return 0;
}