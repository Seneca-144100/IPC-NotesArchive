
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 10;
  int b = 20;
  int res;
  res = a > b;
  printf("%d > %d is: %d\n", a, b, res);
  res = a < b;
  printf("%d < %d is: %d\n", a, b, res);

  return 0;
}
