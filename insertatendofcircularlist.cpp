#include <iostream>

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

// this function takes O(N) time to finish inserting at the beginning
Node *insertatend(Node *head, int value)
{
    Node *newNode = createNode(value);

    if (head == nullptr)
    {
        newNode->next = newNode; // Point to itself for circular behavior
        return newNode;
    }
    else
    {
        newNode->next = head;
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        curr->next = newNode;
        return head;
    }
}

// this function takes O(1) time
/*
Node *insertatbeginning(Node *head, int value)
{
    Node *newNode = createNode(value);

    if (head == nullptr)
    {
        newNode->next = newNode; // Point to itself for circular behavior
        return newNode;
    }
    else
    {
        newNode->next = head->next;
        head->next = newNode;
        int t = newNode->data;
        newNode->data = head->data;
        head->data = t;
        return newNode;
    }
} */

void display(Node *head)
{
    if (head == nullptr)
    {
        std::cout << "Circular Linked List is empty." << std::endl;
        return;
    }

    Node *current = head;
    do
    {
        std::cout << current->data << " ";
        current = current->next;
    } while (current != head);
    std::cout << std::endl;
}

int main()
{
    Node *head = nullptr;

    // Insert three elements
    head = insertatend(head, 10);
    head = insertatend(head, 20);
    head = insertatend(head, 30);
    // Display the circular list

    display(head);

    return 0;
}
