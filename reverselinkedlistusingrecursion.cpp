#include <iostream>
using namespace std;

// will start tomorrow at 4

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

    cout << endl;
}

node *reverselist(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *temp = reverselist(head->next);
    temp = head->next;
    temp->next = head;
    head->next = NULL;
}

int main()
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    head->next = second;
    second->next = third;
    third->next = NULL;
    head = reverselist(head);
    printLinkedList(head);
    delete head;
}