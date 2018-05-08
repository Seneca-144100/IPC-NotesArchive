#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 13;
  int R, D;
  D = a / 5;
  R = a % 5;
  printf("division result: %d remainder is: %d\n", D, R);
  return 0;
}