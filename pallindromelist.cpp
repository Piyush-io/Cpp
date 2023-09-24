//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
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

// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution
{
public:
    // Function to check whether the list is palindrome.
    Node *reverselist(Node *&head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *curr = head;
        Node *newnext = NULL;
        Node *prev = NULL;
        while (curr != NULL)
        {
            prev = curr->next;
            curr->next = newnext;
            newnext = curr;
            curr = prev;
        }
        head = newnext;
        return head;
    }

    bool isPalindrome(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow = reverselist(slow->next);
        while (head && slow)
        {
            if (head->data != slow->data)
            {
                return false;
            }
            else
            {
                head = head->next;
                slow = slow->next;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
    int T, i, n, l, firstdata;
    cin >> T;
    while (T--)
    {

        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        // taking first data of LL
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for (i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.isPalindrome(head) << endl;
    }
    return 0;
}

// } Driver Code Ends