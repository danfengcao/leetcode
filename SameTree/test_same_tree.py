#!/usr/bin/python

import unittest
import same_tree

class TestSolution(unittest.TestCase):
    def setUp(self):
        print "setUp Test Solution..."
        
    def tearDown(self):
        pass

    def test_max_depth(self):
        mytest  = same_tree.Solution()
        null_tree = None
        small_tree = same_tree.TreeNode(1)
        small_tree.left = same_tree.TreeNode(2)
        big_tree = same_tree.TreeNode(1)
        big_tree.left = same_tree.TreeNode(2)
        big_tree.right = same_tree.TreeNode(3)
        big_tree.left.left = same_tree.TreeNode(4)
        
        self.assertTrue(mytest.is_same_tree(null_tree, null_tree))
        self.assertFalse(mytest.is_same_tree(null_tree, small_tree))
        self.assertFalse(mytest.is_same_tree(big_tree, null_tree))

        self.assertTrue(mytest.is_same_tree(small_tree, small_tree))
        self.assertTrue(mytest.is_same_tree(big_tree, big_tree))
        self.assertFalse(mytest.is_same_tree(small_tree, big_tree))

if __name__ == '__main__':
    unittest.main()
