#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 13;
  int b;
  b = !(a < 10); // b is one
  b = !(a < 13); // b is zero;
  a = 0;
  b = !a; // b is one
  a = 1;
  b = !a; // 
  a = 2345;
  b = !a; // b is zero
  b = !!a; // b is one

  return 0;
}