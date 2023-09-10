#include <iostream>
using namespace std;

struct node // structure of name node (not using class becasue of longer code required)
{
    int datapoint; // the part of memory that will store the value of that node
    node *next;    // part of memory that will store the address to next structure type node
    node *prev;
    node(int x) // constructor just for the code to be pretty and to make our code shorter
    {
        datapoint = x;
        next = NULL;
        prev = NULL;
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

void printLinkedListfromend(node *node) // function to print the linked list
{

    if (node == NULL)
    {
        return;
    }

    while (node != NULL)
    {
        cout << node->datapoint << " ";
        node = node->prev;
    }
    cout << endl;
}

int main()
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    node *end = third;
    printLinkedList(head);
    printLinkedListfromend(end);
    head = nullptr;
    delete head;
    end = nullptr;
    delete end;
}