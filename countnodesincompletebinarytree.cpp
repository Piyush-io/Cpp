#include <iostream>
using namespace std;
class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

int getLeftHeight(TreeNode *node)
{
    int height = 0;
    while (node != NULL)
    {
        height++;
        node = node->left;
    }
    return height;
}

int getRightHeight(TreeNode *node)
{
    int height = 0;
    while (node != NULL)
    {
        height++;
        node = node->right;
    }
    return height;
}

int countNodes(TreeNode *root)
{
    if (!root)
    {
        return 0;
    }

    int leftHeight = getLeftHeight(root);
    int rightHeight = getRightHeight(root);

    if (leftHeight == rightHeight)
    {
        return (1 << leftHeight) - 1;
    }
    else
    {
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}

int main()
{
    // Example usage:
    // Construct a complete binary tree.
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int nodeCount = countNodes(root);
    cout << "Number of nodes in the complete binary tree: " << nodeCount << endl;
    delete root;
    return 0;
}
