#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  float a = 10.1;
  float b = 25.2;
  float c;
  printf("a: %.2f\nb: %.2f\n", a, b);
  c = a + b * 2;
  printf("c = a + b * 2: %.2f\n", c);
  c = (a + b) * 2;
  printf("c = (a + b) * 2: %.2f\n", c);
  c = b / a;
  printf("c = b / a: %.2f\n", c);
  // c = b % a;  // error, does make sence for floating point values
  // printf("c = b %% a: %.2f\n", c);
  c = b - a;
  printf("c = b - a: %.2f\n", c);
  c = b++;
  printf("c = b++: %.2f\nAnd after the expression the value of b is: %.2f\n", c, b);
  c = ++b;
  printf("c = ++b: %.2f\nAnd after the expression the value of b is: %.2f\n", c, b);
  return 0;
}