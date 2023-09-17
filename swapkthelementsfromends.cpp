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

Node *swapkthnode(Node *head, int num, int K);

void addressstore(Node **arr, Node *head)
{
    Node *temp = head;
    int i = 0;
    while (temp)
    {
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node **before, Node **after, int num, int K)
{
    if (K > num)
        return 1;

    bool f = true;

    for (int i = 0; i < num; i++)
    {
        if ((i == K - 1) || (i == num - K))
        {
            if (!((before[K - 1] == after[num - K]) && (before[num - K] == after[K - 1])))
                f = 0;
        }
        else
        {
            if (before[i] != after[i])
                f = 0;
        }
    }

    return f;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num, K, firstdata;
        cin >> num >> K;
        int temp;
        cin >> firstdata;
        Node *head = new Node(firstdata);
        Node *tail = head;
        for (int i = 0; i < num - 1; i++)
        {
            cin >> temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }

        Node *before[num];
        addressstore(before, head);

        head = swapkthnode(head, num, K);

        Node *after[num];
        addressstore(after, head);

        if (check(before, after, num, K))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}

// } Driver Code Ends

#include <vector>
// User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

// Function to swap Kth node from beginning and end in a linked list.

/*
Node *swapkthnode(Node* head, int num, int k)
{
    Node *temp = head;
    vector<Node*> ans;
    if (k > num)
    {
        return head;
    }
    else
    {
        while (temp)
        {
            ans.push_back(temp);
            temp = temp->next;
        }
        swap(ans[k - 1], ans[num - k]);
        head = ans[0];
        temp = head;
        int i = 1;
        while (i < ans.size())
        {
            temp->next = ans[i];
            i++;
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
}
*/

Node *swapkthnode(Node *head, int num, int k)
{
    if (num < K)
        return head;
    int cnt1 = K, cnt2 = num - K + 1;
    Node *curr = head;
    Node *prev = NULL;
    Node *node1 = NULL;
    Node *node2 = NULL;
    Node *node1Next = NULL;
    Node *node2Prev = NULL;
    Node *node1Prev = NULL;
    Node *node2Next = NULL;
    while (curr && (cnt1 > 0 || cnt2 > 0))  // curr not becoming null and count of both are not 0
    {
        cnt1--;
        cnt2--;
        if (cnt1 == 0 && node1 == NULL)
        {
            if (prev)  // is not null?
                node1Prev = prev;
            node1 = curr;
            if (curr->next) // not null right?
                node1Next = curr->next;
        }
        if (cnt2 == 0 && node2 == NULL)
        {
            if (prev)
                node2Prev = prev;
            node2 = curr;
            if (curr->next)
                node2Next = curr->next;
        }
        prev = curr;
        curr = curr->next;
    }
    if (node1Prev && node1Prev != node2)
        node1Prev->next = node2;
    if (node2Prev && node2Prev != node1)
        node2Prev->next = node1;
    if (node1 != node2Next)
        node1->next = node2Next;
    else
        node1->next = node2;
    if (node2 != node1Next)
        node2->next = node1Next;
    else
        node2->next = node1;
    if (node1 == head)
        head = node2;
    else if (node2 == head)
        head = node1;
    return head;
}