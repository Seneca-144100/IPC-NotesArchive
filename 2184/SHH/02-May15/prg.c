#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int num;
  int a = 15;
  int b = 6;
  num = 10;
  num = num + 1;
  printf("num is %d\n", num);
  num = a + b;
  num = a - b;
  num = a * b;
  num = a / b;

  return 0;
}