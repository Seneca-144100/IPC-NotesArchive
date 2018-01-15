#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define address *
int main(void) {
  int i = 10;
  double d = 34.56;
  int* p = &i;
  double* q = &d;
  printf("%d starts at byte number %u in memory!\n", i, p);
  printf("%lf starts at byte number %u in memory!\n", d, q);
  return 0;
}
