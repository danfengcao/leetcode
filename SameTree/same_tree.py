#!/usr/bin/python

'''
Given two binary trees, write a function to check if they are equal or not.

Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
'''


# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution(object):
    # @param p, a tree node
    # @param q, a tree node
    # @return a boolean
    def is_same_tree(self, p, q):
        if not p and not q:
            return True
        elif not p or not q:
            return False
        
        if p.val != q.val:
            return False
            
        same_l = self.is_same_tree(p.left, q.left)
        same_r = self.is_same_tree(p.right, q.right)
    
        return same_l and same_r
