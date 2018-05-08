
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 10;
  int b = 20;
  int res;
  int cond1 = 1; 
  int cond2 = 0;
  res = a > b;
  printf("%d > %d is: %d\n", a, b, res);
  res = a < b;
  printf("%d < %d is: %d\n", a, b, res);
  res = a <= b;
  printf("%d < %d is: %d\n", a, b, res);
  res = a == b;
  printf("%d == %d is: %d\n", a, b, res);
  res = cond1 && cond2;
  res = cond1 || cond2;
  res = !cond2;
  return 0;
}
