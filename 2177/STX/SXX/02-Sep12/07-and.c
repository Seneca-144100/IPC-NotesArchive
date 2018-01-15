#include <stdio.h>
int main(void) {
  int a = 0;
  int b = 10;
  int c;
  c = a && b;
  printf("%d && %d is %d\n", a, b, c);
  a = 5;
  c = a && b;
  printf("%d && %d is %d\n", a, b, c);
  a = b = 0;
  c = a && b;
  printf("%d && %d is %d\n", a, b, c);

  return 0;
}