#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  double a;
  double b;
  double c;
  a = 17;
  b = 5;
  c = a + b;
  printf("C is: %lf\n", c);
  c = a - b;
  printf("C is: %lf\n", c);
  c = a * b;
  printf("C is: %lf\n", c);
  c = a / b;
  printf("C is: %lf\n", c);

  return 0;
}