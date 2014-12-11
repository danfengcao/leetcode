class Solution {
public:
  int reverse(int x) {
    int ret = 0;
    while (x / 10) {
      ret = 10 * ret + x % 10;
      x /= 10;
    }
    ret = 10 * ret + x;
    return ret;
  }
};
