//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
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

// } Driver Code Ends
/* Structure of the linked list node is as
struct Node
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

class Solution
{
public:
    // Function to sort the given linked list using Merge Sort.
    Node *get_mid(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL and fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    // to merge two sorted LL
    Node *merge_LL(Node *left, Node *right)
    {
        if (left == NULL)
        {
            return right;
        }
        if (right == NULL)
        {
            return left;
        }
        Node *final_head = new Node(-1);
        Node *final_tail = final_head;

        while (left != NULL and right != NULL)
        {
            if (left->data < right->data)
            {
                final_tail->next = left;
                final_tail = left;
                left = left->next;
            }
            else
            {
                final_tail->next = right;
                final_tail = right;
                right = right->next;
            }
        }
        while (left != NULL)
        {
            final_tail->next = left;
            final_tail = left;
            left = left->next;
        }
        while (right != NULL)
        {
            final_tail->next = right;
            final_tail = right;
            right = right->next;
        }

        final_head = final_head->next;
        return final_head;
    }

    // Function to sort the given linked list using Merge Sort.
    Node *mergeSort(Node *head)
    {
        // base case
        if (head == NULL or head->next == NULL)
        {
            return head;
        }

        // to divide Linked list in two halves
        Node *mid = get_mid(head);

        Node *left = head;
        Node *right = mid->next;
        mid->next = NULL;

        left = mergeSort(left);
        right = mergeSort(right);
        // merge the left and right LL
        Node *result = merge_LL(left, right);
        return result;
    }
};

//{ Driver Code Starts.

void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node **head_ref, int new_data)
{
    Node *new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main()
{
    long test;
    cin >> test;
    while (test--)
    {
        struct Node *a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends