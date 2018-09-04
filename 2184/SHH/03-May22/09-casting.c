#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int i = 10;
  int j;
  double d = 234.5678;
  double e;
  printf("i: %d\nd: %lf\n", i, d);
  j = d; // narrowed
  e = i; // promoted
  printf("j: %d\ne: %lf\n", j, e);
  printf("(double)i: %lf\n(int)d: %d\n", (double)i, (int)d);
  printf("i: %d\nd: %lf\n", i, d);
  printf("d (%%.0lf): %.0lf\n", d);
  d = (int)d;
  printf("d = (int)d: %lf\n", d);
  return 0;
}