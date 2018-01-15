#include <stdio.h>
int main(void) {
  int a = 0;
  int b = 10;
  int c;
  c = a || b;
  printf("%d || %d is %d\n", a, b, c);
  b = 0;
  c = a || b;
  printf("%d || %d is %d\n", a, b, c);
  a = b = 1;
  c = a || b;
  printf("%d || %d is %d\n", a, b, c);
  a = 0;
  c = !a;
  printf("!%d is %d\n", a, c);
  a = 25;
  c = !a;
  printf("!%d is %d\n", a, c);
  a = 25;
  c = !!a;
  printf("!!%d is %d\n", a, c);

  return 0;
}