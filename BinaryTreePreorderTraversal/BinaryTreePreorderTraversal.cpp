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
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> ret;
    stack<TreeNode*> myStack;
    if (root != NULL)
      myStack.push(root);
    while (myStack.empty() == false) {
      TreeNode *top = myStack.top();
      ret.push_back(top->val);
      myStack.pop();
      if (top->right != NULL)
	myStack.push(top->right);
      if (top->left != NULL)
	myStack.push(top->left);
    }
    return ret;
  }
};
