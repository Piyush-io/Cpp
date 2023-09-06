#include <iostream>
using namespace std;

struct node // structure of name node (not using class becasue of longer code required)
{
    int datapoint; // the part of memory that will store the value of that node
    node *next;    // part of memory that will store the address to next structure type node
    node(int x)    // constructor just for the code to be pretty and to make our code shorter
    {
        datapoint = x;
        next = NULL;
    }
};

void printLinkedList(node *node) // function to print the linked list
{

    if (node->next == NULL)
    {
        return;
    }

    while (node != NULL)
    {
        cout << node->datapoint << " ";
        node = node->next;
    }
}

int main()
{
    node *head = new node(10); // head pointer to point to dynamically allocated memory of type "node" that is a structure
    // we node is also a constructor, so when writing new node(10) it create a structure with datapoint 10 and next pointer set to null
    head->next = new node(20); // giving address to head node of next node
    head->next->next = new node(30);
    printLinkedList(head);

    delete head;
    head = nullptr;
}