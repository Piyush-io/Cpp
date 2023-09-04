#include <iostream>
using namespace std;

struct node
{
    int datapoint;
    node *next;
    node(int x)
    {
        datapoint = x;
        next = NULL;
    }
};

void printLinkedList(node *head)
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
    node * head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    printLinkedList(head);
}