#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
  int a = 10;
  int b = 20;
  int d = 30;
  int e = 40;
  int c;
  c = -a;

  c = a*   (b + 3);
  c = a = b;

  c = a > b;
  printf("%d\n", c);
  c = a < b;
  printf("%d\n", c);
  c = a <= b;
  printf("%d\n", c);
  c = a >= b;
  printf("%d\n", c);
  c = a == b;
  printf("%d\n", c);
  c = a != b;
  printf("%d\n", c);

  c = a > b && d != e;
  c = a > b || d != e;
  return 0;
}
