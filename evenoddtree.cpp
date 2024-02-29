/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <iostream>
#include <queue>
using namespace std;
class Solution {
public:
  struct TreeNode() {
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int x) {
      val = x;
      right = NULL;
      left = NULL;
    }
  }
  bool iseven(int x) { return x % 2 == 0; }
  bool isodd(int x) { return x % 2 != 0; }

  bool isEvenOddTree(TreeNode *root) {
    if (root == NULL)
      return false;
    queue<TreeNode *> q;
    q.push(root->val);
    int level = 0;
    while (!q.empty()) {
      int n = q.size();
      int prev = 0;
      for (int i = 0; i < n; i++) {
        TreeNode *temp = q.front();
        q.pop();
        if ((level % 2 == 0 && (iseven(temp->val))) ||
            (level % 2 == 1 && (isodd(temp->val)))) {
          return false;
        }
        if (temp->left)
          q.push(temp->left);
        if (temp->right)
          q.push(temp->right);
      }
      level++;
    }
  }
};
