//{ Driver Code Starts
// driver

#include <iostream>
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

*/

class Solution
{
public:
    // Function to add two numbers represented by linked list.
    Node *reverseList(Node *head)
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }

    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        first = reverseList(first);
        second = reverseList(second);
        int carry = 0;
        Node *resulthead = nullptr;
        Node *curr = nullptr;
        while (first != nullptr || second != nullptr || carry != 0)
        {
            int sum = carry;
            if (first != nullptr)
            {
                sum += first->data;
                first = first->next;
            }

            if (second != nullptr)
            {
                sum += second->data;
                second = second->next;
            }

            carry = sum / 10;
            sum = sum % 10;
            Node *newNode = new Node(sum);

            if (resulthead == nullptr)
            {
                resulthead = newNode;
                curr = resulthead;
            }
            else
            {
                curr->next = newNode;
                curr = curr->next;
            }
        }

        resulthead = reverseList(resulthead);
        return resulthead;
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
        delete first;
        delete second;
    }
    return 0;
}

// } Driver Code Ends