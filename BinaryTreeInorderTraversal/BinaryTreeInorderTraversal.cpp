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
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> ret;
    stack<TreeNode*> myStack;
    if (root == NULL)
      return ret;
    if (root->right != NULL)
      myStack.push(root->right);
    myStack.push(root);
    root->right = NULL;

    while (myStack.empty() == false) {
      TreeNode *top = myStack.top();
      if (top->left == NULL && top->right == NULL) {
	ret.push_back(top->val);
	myStack.pop();
      }
      else if (top->right != NULL) {
	myStack.pop();
	myStack.push(top->right);
	myStack.push(top);
	top->right = NULL;
      }

      else if (top->left != NULL) {
	myStack.push(top->left);
	top->left = NULL;
      }
    }
    return ret;
  }
};
