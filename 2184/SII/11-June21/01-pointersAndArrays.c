#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"

int main(void) {
  int a;
  double b;
  int* p = &a;
  double* q = &b;
  printf("%u    %u\n", p, q);
  p++;
  q++;
  printf("%u    %u\n", p, q);

  return 0;
}