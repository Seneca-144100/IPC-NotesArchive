#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 5;
  int b = 13;
  int c;
  printf("b%%a %d\n", b%a);
//  b = b + a; is the same as line below
  b += a; // adds the value of a to b
  printf("b: %d\n", b);
  c = b > a;
  printf("c: %d\n", c);
  c = b < a;
  printf("c: %d\n", c);
  c = b <= a;
  printf("c: %d\n", c);
  c = b >= a;
  printf("c: %d\n", c);
  c = b == a;
  printf("c: %d\n", c);
  c = b != a;
  printf("c: %d\n", c);
  a = 0;
  b = 5;
  c = a && b;
  printf("c: %d\n", c);
  a = 1;
  b = 5;
  c = a && b;
  printf("c: %d\n", c);
  a = 0;
  b = 5;
  c = a || b;
  printf("c: %d\n", c);
  a = 1;
  b = 5;
  c = a || b;
  printf("c: %d\n", c);
  a = 0;
  b = 0;
  c = a || b;
  printf("c: %d\n", c);
  a = 0;
  printf("!a: %d\n", !a);
  a = 23;
  b = !!a;
  printf("!!a: %d\n", b);
  return 0;
}