/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
  int maxDepth(TreeNode *root) {
    if (root == NULL)
      return 0;
    int len_l = maxDepth(root->left) + 1;
    int len_r = maxDepth(root->right) + 1;
    return (len_l > len_r) ? len_l : len_r;
  }
};
