#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"

int main(void) {
  int a;
  double d;
  int* ip = &a;
  double *dp = &d;
  printf("%u   %u\n", ip, dp);
  ip++;
  dp++;
  printf("%u   %u\n", ip, dp);

  return 0;
}