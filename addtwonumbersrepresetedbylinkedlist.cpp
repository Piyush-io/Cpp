//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *buildList(int size)
{
    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n)
{
    while (n)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
//ill fucking do the rest tomorrow
*/

class Solution
{
public:
    // Function to add two numbers represented by linked list.
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
    }

    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        string num1 = "";
        string num2 = "";
        Node *curr1 = first;
        Node *curr2 = second;
        while (curr1 != NULL || curr2 != NULL)
        {
            num1 = num1 + to_string(curr1->data);
            num2 = num2 + to_string(curr2->data);
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        while (curr1 != NULL)
        {
            num1 = num1 + to_string(curr1->data);
            curr1 = curr1->next;
        }
        while (curr2 != NULL)
        {
            num2 = num2 + to_string(curr2->data);
            curr2 = curr2->next;
        }

        int n1 = stoi(num1);
        int n2 = stoi(num2);
        int res = n1 + n2;
        Node *reshead;
        while (res != 0)
        {
            reshead = insertatbeginning(reshead, res % 10);
            res = res / 10;
        }
        return reshead;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n;
        Node *first = buildList(n);

        cin >> m;
        Node *second = buildList(m);
        Solution ob;
        Node *res = ob.addTwoLists(first, second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends