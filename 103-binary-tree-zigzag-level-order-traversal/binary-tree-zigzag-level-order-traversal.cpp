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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
    	vector<vector<int> > ans;
        if(root == nullptr)
            return ans;
        
        queue<TreeNode*> lvlOrder;
        lvlOrder.push(root);
        int i = 0;
        while(!lvlOrder.empty()) {
            i++;
            vector<int> res;
            int n = lvlOrder.size();
            while(n--) {
                TreeNode* temp = lvlOrder.front();
                lvlOrder.pop();
                if(temp->left)
                    lvlOrder.push(temp->left);
                if(temp->right)
                    lvlOrder.push(temp->right);

                res.push_back(temp->val);
            }
            if(i%2 == 0)
                reverse(res.begin() , res.end());
            ans.push_back(res);
        }
        return ans;
    }
};