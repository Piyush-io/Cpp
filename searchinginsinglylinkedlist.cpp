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

    cout << endl;
}

int searchnode(node *&head, int x)
{
    node *curr = head;
    int pos = 1;
    while (curr != NULL && curr->datapoint != x)
    {
        pos++;
        curr = curr->next;
    }

    return curr == NULL ? -1 : pos;
}

int searchnoderecc(node *&head, int x, int count)
{

    if (head == NULL)
    {
        return -1;
    }

    if (head->datapoint == x)
    {
        return count;
    }

    return searchnoderecc(head->next, x, ++count);
}

int main()
{
    node *head = new node(10); // head pointer to point to dynamically allocated memory of type "node" that is a structure
    // we node is also a constructor, so when writing new node(10) it create a structure with datapoint 10 and next pointer set to null
    head->next = new node(20); // giving address to head node of next node
    head->next->next = new node(30);
    printLinkedList(head);
    int x;
    cout << "Element to search: " << endl;
    cin >> x;
    cout << "Value by iteration: " << searchnode(head, x) << endl;
    cout << "Value by recursion: " << searchnoderecc(head, x, 1) << endl;
    while (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}