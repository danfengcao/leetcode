#include <cstdio>

struct TreeNode {
  TreeNode *left;
  TreeNode *right;
  int val;
};

    
bool coreIsBalanced(TreeNode *root, int *depth) {
  if (root == NULL) {
    *depth = 0;
    return true;
  }

  int left, right;
  coreIsBalanced(root->left, &left);
  coreIsBalanced(root->right, &right);
  *depth = ((left>right)?left:right) + 1;
  if (((left-right) < -1) || ((left - right) > 1))
    return false;
  else
    return true;
}

bool isBalanced(TreeNode *root) {
  int depth;
  return coreIsBalanced(root, &depth);
}


int main() {
  TreeNode *root = new TreeNode;
  root->val = 1;
  root->left = NULL;
  root->right = NULL;

  bool ret = isBalanced(root);

  printf("ret = %d\n", ret);
}
