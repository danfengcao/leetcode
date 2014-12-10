#include <stdio.h>

int main() {
  
  int N = 10;
  char tmp[N];
  scanf("%s", tmp);
  printf("%d\n", strlen(tmp));
  printf("%d\n", sizeof(tmp));
  
  printf("%s\n", tmp);
}
