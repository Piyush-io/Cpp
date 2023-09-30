#include <iostream>
#include <vector>
using namespace std;

class stack
{
private:
    int size;
    int capacity;
    struct Node
    {
        int data;
        Node *next;
        Node *prev;
        Node(int x)
        {
            data = x;
            next = NULL;
            prev = NULL;
        }
    };
    Node *curr;
    Node *head;

public:
    stack(int x)
    {
        size = 0;
        capacity = x;
        curr = NULL;
        head = NULL;
    }

    bool isfull()
    {
        return size == capacity;
    }

    void push(int x)
    {
        Node *newnode = new Node(x);
        if (head == NULL)
        {
            head = curr = newnode;
            size++;
            return;
        }
        curr->next = newnode;
        newnode->prev = curr;
        curr = curr->next;
        size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        if (head == curr)
        {
            delete curr;
            head = curr = NULL;
        }
        else
        {
            curr = curr->prev;
            delete curr->next;
            curr->next = NULL;
        }
    }

    void peek()
    {
        cout << "Top element is: " << curr->data << endl;
        return;
    }

    ~stack()
    {
        while (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    stack s(5);
    s.pop();
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.pop();
    s.push(40);
    s.push(50);
    s.push(60);
    s.peek();
    s.push(70);
    s.pop();
}