#include <iostream>
using namespace std;

struct node // structure of name node (not using class becasue of longer code required)
{
    int datapoint;  // the part of memory that will store the value of that node
    node *next;  // part of memory that will store the address to next structure type node
    node(int x)  // constructor just for the code to be pretty and to make our code shorter
    {
        datapoint = x;   
        next = NULL;
    }
};

void printLinkedList(node *head)  // function to print the linked list
{
    node *current = head; 
    while (current != NULL)
    {
        cout << current->datapoint << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    node * head = new node(10);  // pointer of type struct node pointing to a datapoint 
    // i still dont get the above part
    head->next = new node(20);  // giving address to head node of next node
    head->next->next = new node(30);
    printLinkedList(head);
}