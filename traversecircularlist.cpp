#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

Node *insert(Node *head, int value)
{
    Node *newNode = createNode(value);

    if (head == nullptr)
    {
        newNode->next = newNode; // Point to itself for circular behavior
        return newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        return head;
    }
}

void display(Node *head)
{
    if (head == nullptr)
    {
        cout << "Circular Linked List is empty." << endl;
        return;
    }

    Node *current = head;
    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}

int main()
{
    Node *head = nullptr;

    // Insert three elements
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);

    // Display the circular list
    display(head);

    return 0;
}
