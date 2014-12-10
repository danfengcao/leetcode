#include <cstdio>

int reverse(int x) {
  int ret = 0;
  while (x / 10) {
    ret = 10 * ret + x % 10;
    x /= 10;
  }
  ret = 10 * ret + x;
  return ret;
}

int main()
{
  int a = reverse(-123);
  printf("a=%d\n", a);
  return 0;
}
