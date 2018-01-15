#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 5;
  int b;
  b = ++a;
  printf("a: %d, b: %d\n", a, b);
  b = a++;
  printf("a: %d, b: %d\n", a, b);
  return 0;
}