/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) 
    {
        return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
    }
    
    bool isValidBSTHelper(TreeNode* root, long minVal, long maxVal) 
    {
        if (root == nullptr) 
        {
            return true;
        }
        
        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }
        
        return isValidBSTHelper(root->left, minVal, root->val) && 
               isValidBSTHelper(root->right, root->val, maxVal);
    }
};