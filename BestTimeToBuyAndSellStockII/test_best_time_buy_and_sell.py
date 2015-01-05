#!/usr/bin/python

import unittest
import best_time_to_buy_and_sell_stocks

class TestSolution(unittest.TestCase):

    def setUp(self):
        print "setUp Test Solution..."

    def tearDown(self):
        pass

    def test_single_num(self):
        tclass = best_time_to_buy_and_sell_stocks.Solution()
        l_null = []
        l_float = [1.1, 2.2, 2.2]
        l_normal = [1, 2, 3, 2, 3]
        l_minus = [-1, -2, 3, -2, 3]

        self.assertEquals(tclass.maxProfit(l_null), 0)
        self.assertEquals(tclass.maxProfit(l_float), 1.1)
        self.assertEquals(tclass.maxProfit(l_normal), 3)

        with self.assertRaises(TypeError):
            tclass.maxProfit(l_minus)


if __name__ == '__main__':
    unittest.main()


