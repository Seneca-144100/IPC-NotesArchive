#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a, c;
  double b = 234.999;
  a = b;
  printf("%d\n", a);
  b = b - a;
  b *= 100;
  c = b;
  printf("c: %d\n", c);
  printf("c / 25: %d\n", c / 25);
  printf("c %% 25: %d\n", c % 25);
  return 0;
}