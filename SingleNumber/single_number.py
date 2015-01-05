#!/usr/bin/python

'''
Given an array of integers, every element appears twice except for one. Find that single one.
'''

class Solution(object):
    def single_number(self, A):
        '''
        Given an array of integers, every element appears twice except for one. Find that single one.

        @param A, a list of integer
        @return an integer
        '''

        if not A:
            return None

        ret = 0
        for i in A:
            try:
                ret ^= i
            except TypeError:
                raise TypeError("Please input integer")
        return ret
