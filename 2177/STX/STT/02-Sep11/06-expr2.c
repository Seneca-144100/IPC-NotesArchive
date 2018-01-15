#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 5;
  int b;
  b = 10;
  printf("a: %d, b: %d\n", a, b);
  printf("a+b: %d\n", a + b);
  printf("a: %d, b: %d\n", a, b);
  -a;
  printf("a: %d\n", -a);
  printf("a: %d\n", a);
  b = a = -a;
  printf("a: %d, b: %d\n", a, b);
  return 0;
}