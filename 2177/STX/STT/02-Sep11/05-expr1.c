#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 5;
  int b;
  b = 10;
  printf("a: %d, b: %d\n", a, b);
  printf("a+b: %d\n", a + b);
  printf("-b: %d\n", -b);
  printf("a: %d\n", a);
  a = a + 1;
  printf("a: %d\n", a);
  a++;
  printf("a: %d\n", a);
  ++a;
  printf("a: %d\n", a);
  a--;
  printf("a: %d\n", a);
  --a;
  printf("a: %d\n", a);
  return 0;
}