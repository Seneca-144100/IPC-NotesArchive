#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a;
  int b;
  int c;
  a = 17;
  b = 5;
  c = a + b;
  printf("C is: %d\n", c);
  c = a - b;
  printf("C is: %d\n", c);
  c = a * b;
  printf("C is: %d\n", c);
  c = a / b;
  printf("C is: %d\n", c);
  c = a % b;
  printf("C is: %d\n", c);
  return 0;
}