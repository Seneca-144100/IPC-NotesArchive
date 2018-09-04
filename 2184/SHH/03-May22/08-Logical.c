#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 10;
  int b = 25;
  int c;
  printf("a: %d\nb: %d\n", a, b);
  c = a == 10;
  printf("c = a == 10: %d\n", c);
  c = a < b;
  printf("c = a < b: %d\n", c);
  c = a <= b;
  printf("c = a <= b: %d\n", c);
  c = a > b;
  printf("c = a > b: %d\n", c);
  c = a >= b;
  printf("c = a >= b: %d\n", c);
  c = a != b;
  printf("c = a != b: %d\n", c);
  c = a == b;
  printf("c = a == b: %d\n", c);
  printf("logicals\n");
  c = a == 10 && a == b;
  printf("c = a == 10 && a == b: %d\n", c);
  c = a == 10 || a == b;
  printf("c = a == 10 || a == b: %d\n", c);
  c = a < b && a != b;
  printf("c = a < b && a != b: %d\n", c);
  c = a > b || a == b;
  printf("c = a > b || a == b: %d\n", c);
  c = !a;
  printf("c = !a: %d\n", c);
  c = !!a;
  printf("c = !!a: %d\n", c);
  c = a && b;
  printf("c = a && b: %d\n", c);
  return 0;
}