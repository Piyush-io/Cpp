#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

class Solution
{
public:
    // Function to calculate the total number of elements in the tree.
    int maxele(Node *node)
    {
        if (node == NULL)
            return INT_MIN;
        return max(node->data, max(maxele(node->left), maxele(node->right)));
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character

    while (t--)
    {
        string s;
        getline(cin, s);

        Node *root = buildTree(s);

        int ans;
        Solution ob;
        ans = ob.maxele(root);
        cout << ans << " ";
        cout << endl;
    }
    return 0;
}
