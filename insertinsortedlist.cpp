#include <iostream>
using namespace std;

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

Node *createNode(int value)
{
    Node *newNode = new Node(value);
    return newNode;
}

Node *newinsert(Node *head, int num)
{
    Node *newNode = new Node(num);
    if (num < head->data)
    {
        newNode->next = head;
        return newNode;
    }
    if (head == NULL)
    {
        return newNode;
    }

    Node *curr = head;
    while (curr->next != NULL && curr->next->data < num)
    {
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void display(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    // Display the circular list
    display(head);
    head = newinsert(head, 40);
    display(head);
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}
