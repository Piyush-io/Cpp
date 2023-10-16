#include <bits/stdc++.h>
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
    int totalElements(Node *node)
    {
        if (node == NULL)
            return 0;
        return 1 + totalElements(node->left) + totalElements(node->right);
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
        ans = ob.totalElements(root);
        cout << ans << " ";
        cout << endl;
    }
    return 0;
}
