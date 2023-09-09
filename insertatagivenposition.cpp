#include <iostream>
using namespace std;

struct node
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

void insertataposition(node *&head, int x, int p)
{
    node *newpoint = new node(x); // new node which will new head created with value x
    node *it = head;

    if (p == 1)
    {
        newpoint->next = head;
        head = newpoint;
        return;
    }
    

    int count = 1;
    while (count != p - 1 && it != NULL)
    {
        it = it->next;
        count++;
    }
    
    if (it == NULL)
    {
        return;
    }

    newpoint->next = it->next; 
    it->next = newpoint;
}

int main()
{
    node *head = new node(10); // head pointer to point to dynamically allocated memory of type "node" that is a structure
    // we node is also a constructor, so when writing new node(10) it create a structure with datapoint 10 and next pointer set to null
    head->next = new node(20); // giving address to head node of next node
    head->next->next = new node(30);
    printLinkedList(head);
    int x;
    cout << "Enter value you want to add: " << endl;
    cin >> x;
    int pos;
    cout << "Enter the position :" << endl;
    cin >> pos;
    insertataposition(head, x, pos);
    printLinkedList(head);
    delete head;
    head = nullptr;
}