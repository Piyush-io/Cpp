#include <iostream>

using namespace std;

struct TreeNode
{
    int key;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data) : key(data), left(nullptr), right(nullptr) {}
};

void inOrderTraversal(TreeNode *root)
{
    if (root != nullptr)
    {
        inOrderTraversal(root->left);
        cout << root->key << " ";
        inOrderTraversal(root->right);
    }
}

TreeNode *findMinValueNode(TreeNode *node)
{
    TreeNode *current = node;
    while (current->right != nullptr)
    {
        current = current->right;
    }
    return current;
}

TreeNode *deleteNode(TreeNode *root, int key)
{
    if (root == nullptr)
    {
        return root;
    }

    if (key == root->key)
    {
        if (root->left == nullptr)
        {
            TreeNode *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            TreeNode *temp = root->left;
            delete root;
            return temp;
        }
        TreeNode *temp = findMinValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    else if (key < root->key)
    {
        root->left = deleteNode(root->left, key);
    }
    else
    {
        root->right = deleteNode(root->right, key);
    }

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(50);
    root->left = new TreeNode(30);
    root->right = new TreeNode(70);
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(40);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(80);

    root = deleteNode(root, 30);

    inOrderTraversal(root);

    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
