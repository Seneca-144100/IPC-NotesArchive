#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  double d = 123.456789;
  printf("d: %.2lf\n", d);
  d = 123.454677;
  printf("d: %.2lf\n", d);
  return 0;
}