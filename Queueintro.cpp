#include <iostream>
using namespace std;

class Queue
{

private:
    int capacity;
    int front;
    struct Node
    {
        int data;
        Node *next;
        Node(int x)
        {
            data = x;
            next = NULL;
        }
    };
    Node *head;
    Node *curr;

public:
    Queue(int x)
    {
        capacity = x;
        head = NULL;
        curr = NULL;
    }

    ~Queue()
    {
        while (!isempty())
        {
            dequeue();
        }
    }
    bool isempty()
    {
        return head == NULL;
    }

    void enqueue(int x)
    {
        Node *newcustomer = new Node(x);
        if (curr == NULL)
        {
            head = curr = newcustomer;
            return;
        }
        curr->next = newcustomer;
        curr = curr->next;
    }

    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node *temp = head;
        cout << "Dequeued: " << head->data << endl;
        head = head->next;
        if (head == NULL)
        {
            curr = NULL;
        }

        delete temp;
    }

    void getfront()
    {
        if (isempty())
        {
            cout << "empty" << endl;
        }
        else
            cout << head->data << endl;
    }

    void getrear()
    {
        if (isempty())
        {
            cout << "Empty" << endl;
            return;
        }
        else
        {
            cout << curr->data << endl;
            return;
        }
    }
    void deletequeue()
    {
        while (!isempty())
        {
            dequeue();
        }
    }
};

int main()
{
    Queue customers = Queue(5);
    customers.enqueue(5);
    customers.enqueue(10);
    customers.enqueue(20);
    customers.dequeue();
    customers.enqueue(30);
    customers.enqueue(40);
    customers.dequeue();
    customers.dequeue();
    customers.dequeue();
    customers.deletequeue();
}