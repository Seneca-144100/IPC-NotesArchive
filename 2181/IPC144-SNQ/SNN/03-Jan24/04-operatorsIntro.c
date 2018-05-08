/*
  a + b
  -c
  c = a = b;
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 10;
  int b = 20;
  int res;
  res = a * b;
  a = a + b;
  a += b;
  a /= b; // a = a / b;
  return 0;
}
