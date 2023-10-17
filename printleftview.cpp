#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void printLeftView(TreeNode *root)
{
    if (root == NULL)
        return;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; ++i)
        {
            TreeNode *tempNode = q.front();
            q.pop();

            // print the leftmost node of each level
            if (i == 0)
                cout << tempNode->val << " ";

            if (tempNode->left != NULL)
                q.push(tempNode->left);
            if (tempNode->right != NULL)
                q.push(tempNode->right);
        }
    }
}