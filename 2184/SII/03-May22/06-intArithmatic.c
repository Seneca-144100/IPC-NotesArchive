#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 10;
  int b = 25;
  int c;
  printf("a: %d\nb: %d\n", a, b);
  c = a + b * 2;
  printf("c = a + b * 2: %d\n", c);
  c = (a + b) * 2;
  printf("c = (a + b) * 2: %d\n", c);
  c = b / a;
  printf("c = b / a: %d\n", c);
  c = b % a;
  printf("c = b %% a: %d\n", c);
  c = b - a;
  printf("c = b - a: %d\n", c);
  c = b++;
  printf("c = b++: %d\nAnd after the expression the value of b is: %d\n", c, b);
  c = ++b;
  printf("c = ++b: %d\nAnd after the expression the value of b is: %d\n", c, b);
  return 0;
}