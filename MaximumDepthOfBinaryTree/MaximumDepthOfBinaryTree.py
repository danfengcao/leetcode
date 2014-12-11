# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return an integer
    def maxDepth(self, root):
        if (root == NULL):
            return 0
        len_l = self.maxDepth(root.left) + 1
        len_r = self.maxDepth(root.right) + 1
        return (len_l > len_r) ? len_l : len_r

