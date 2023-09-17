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

Node *deletekth(Node *head, int k)
{
    if (head == NULL)
    {
        return nullptr;
    }

    if (head->next == head)
    {
        delete head;
        return nullptr;
    }

    if (k == 1)
    {
        Node *temp = head;
        Node *newHead = head->next; // Update the head to the next node
        Node *current = head;
        while (current->next != head)
        {
            current = current->next;
        }
        current->next = newHead; // Update the last node's next pointer
        delete temp;
        return newHead;
    }

    Node *curr = head;
    for (int i = 1; i < k - 1; i++)
    {
        curr = curr->next;
    }

    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
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
    head = deletekth(head, 2);
    display(head);

    return 0;
}
