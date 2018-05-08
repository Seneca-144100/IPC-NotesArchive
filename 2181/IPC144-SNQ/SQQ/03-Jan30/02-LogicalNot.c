#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 13;
  int b = 10;
  int c;
  double f = 0.000000000001;
  c = a > b;
  c = !(a > b);
  c = a <= b;

  c = !a;
  c = !!a;
  c = !f;

  return 0;
}