#include <iostream>

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class CircularDoublyLinkedList
{
private:
    Node *head;

public:
    CircularDoublyLinkedList() : head(nullptr) {}

    // Function to insert a node at the beginning of the list
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
            head = newNode;  // remove this if you need to insert at the end
        }
    }

    // Function to display the circular doubly linked list
    void display()
    {
        if (!head)
        {
            std::cout << "List is empty." << std::endl;
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
};

int main()
{
    CircularDoublyLinkedList list;

    // Insert elements at the beginning
    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);

    // Display the circular doubly linked list
    list.display();

    return 0;
}
