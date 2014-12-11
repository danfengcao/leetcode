/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
  void connect(TreeLinkNode *root) {
    if  (root== NULL)
      return;
        
    TreeLinkNode *nodeDep = root;
    while (nodeDep->left) {
      TreeLinkNode *nodeWid = nodeDep;
      while (nodeWid) {
	if (nodeWid->left != NULL && nodeWid->right != NULL)
	  nodeWid->left->next = nodeWid->right;
            
	if (nodeWid->right != NULL && nodeWid->next != NULL)
	  nodeWid->right->next = nodeWid->next->left;
            
	nodeWid = nodeWid->next;
      }
      nodeDep = nodeDep->left;
    }
  }
};
