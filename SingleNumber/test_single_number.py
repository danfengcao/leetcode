#!/usr/bin/python

import unittest
import single_number

class TestSolution(unittest.TestCase):

    def setUp(self):
        print "setUp Test Solution..."

    def tearDown(self):
        pass

    def test_single_num(self):
        tclass = single_number.Solution()
        l_null = []
        l_float = [1.1, 2.2, 2.2]
        l_normal1 = [1, 2, 3, 2, 3]
        l_normal2 = [-1, -2, 3, -2, 3]
        self.assertIsNone(tclass.single_number(l_null))
        with self.assertRaises(TypeError):
            tclass.single_number(l_float)
        self.assertEquals(tclass.single_number(l_normal1), 1)
        self.assertEquals(tclass.single_number(l_normal2), -1)

if __name__ == '__main__':
    unittest.main()


