#!/usr/bin/python

'''
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
'''

# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def max_depth(self, root):
        '''
        Get the maximum depth of binary tree.
        
        @param root, a tree node
        @return an integer
        '''

        if not root:
            return 0
        len_l = self.max_depth(root.left) + 1
        len_r = self.max_depth(root.right) + 1
        if len_l > len_r:
            return len_l
        else:
            return len_r
