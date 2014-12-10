#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

TreeNode *coreSortedArrayToBST(vector<int> &num, int st, int en) {
  if (st > en)
    return NULL;
  
  int mid = st + (en - st) / 2;
  TreeNode *root = new TreeNode(num[mid]);
  
  root->left = coreSortedArrayToBST(num, st, mid-1);
  root->right = coreSortedArrayToBST(num, mid+1, en);
  
  return root;
}

TreeNode *sortedArrayToBST(vector<int> &num) {
  int len = num.size();
  if (len <= 0)
    return NULL;
  
  return coreSortedArrayToBST(num, 0, len-1);
}

int main() {
  vector<int> num;
  num.push_back(0);
  TreeNode *root = sortedArrayToBST(num);
  cout << num[0] << endl;
  cout << root->val << endl;
}
