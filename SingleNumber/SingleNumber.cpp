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

int main()
{
  int a[] = {1,1,2,2,3};
  Solution *s = new Solution();
  printf("%d\n", s->singleNumber(a, sizeof(a)/sizeof(a[0])));
  return 0;
}
