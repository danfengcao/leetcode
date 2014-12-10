// Source : https://oj.leetcode.com/problems/single-number/
// Author : Danfeng Cao
// Date   : 2014-10-23

/********************************************************************************** 
 * 
 * Given an array of integers, every element appears twice except for one. Find that single one.
 * 
 * Note:
 * Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
 *               
 **********************************************************************************/

#include <stdio.h>

class Solution {
public:
  int singleNumber(int A[], int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
      result ^= A[i];
    }
    return result;
  }
};


int singleNumber(int A[], int n) {
  int s = 0;
  for (int i = 0; i < n; ++i) {
    s ^= A[i];
  }
  return s;
}

int main()
{
  int a[] = {1,1,2,2,3};
  printf("%d\n", singleNumber(a, sizeof(a)/sizeof(a[0])));
  return 0;
}
