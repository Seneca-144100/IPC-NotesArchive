#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 13;
  int b = 10;
  int c;
  c = !(a && b);
  c = !a || !b;

  c = !(a || b);
  c = !a && !b;


  // c = a > b && d < f;
  // c = a <= b || d >=f;


  return 0;
}