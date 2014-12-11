class Solution {
public:
  int numTrees(int n) {
    if (n == 0 || n == 1)
      return 1;

    int ret = 0;
    for (int i = 0; i < n; ++i)
      ret += numTrees(i) * numTrees(n - i - 1);
    return ret;
  }
};
