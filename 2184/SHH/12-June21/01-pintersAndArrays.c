#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"

int main(void) {
  double val = 234.567;
  double *dp = &val;
  int ar[5] = { 10, 20, 30, 40, 50 };
  printf("%d\n", ar[0]);
  printf("%d\n", *ar);
  printf("%lf\n", val);
  printf("%lf\n", *dp);
  printf("%lf\n", dp[0]);
  return 0;
}