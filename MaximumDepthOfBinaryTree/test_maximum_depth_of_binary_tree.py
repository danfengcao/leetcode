#!/usr/bin/python

import unittest
import maximum_depth_of_binary_tree

class TestSolution(unittest.TestCase):
    def setUp(self):
        print "setUp Test Solution..."
        
    def tearDown(self):
        pass

    def test_max_depth(self):
        mytest  = maximum_depth_of_binary_tree.Solution()
        tree1 = maximum_depth_of_binary_tree.TreeNode(1)
        tree1.left = maximum_depth_of_binary_tree.TreeNode(2)
        tree1.left.left = maximum_depth_of_binary_tree.TreeNode(3)
        
        tree2 = maximum_depth_of_binary_tree.TreeNode(1)
        tree3 = None
        
        self.assertEquals(mytest.max_depth(tree1), 3)
        self.assertEquals(mytest.max_depth(tree2), 1)
        self.assertEquals(mytest.max_depth(tree3), 0)


if __name__ == '__main__':
    unittest.main()
