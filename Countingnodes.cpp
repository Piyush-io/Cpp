//{ Driver Code Starts
#include <iostream>
using namespace std;

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

class Solution
{
public:
    // Function to count nodes of a linked list.
    int getCount(struct Node *head)
    {

        Node *curr = head;
        int res = 0;
        while (curr->next != NULL)
        {
            res++;
            curr = curr->next;
        }
        return res + 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
    }
    return 0;
}
// } Driver Code Ends