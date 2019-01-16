#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a;
  int b;
  int x = 3;
  int y = 5;
  int z = 0;
  int c;
  a = 17;
  b = 5;
  c = a > b || x > y;
  printf("c is: %d\n", c);
  c = a < b || x > y; 
  printf("c is: %d\n", c);
  c = a > b && x > y;
  printf("c is: %d\n", c);
  c = a && z;
  printf("c is: %d\n", c);
  c = a || z;
  printf("c is: %d\n", c);
  c = !(a < z);
  printf("c is: %d\n", c);
  c = !a;
  printf("c is: %d\n", c);
  c = !!a;
  printf("c is: %d\n", c);
  return 0;
}