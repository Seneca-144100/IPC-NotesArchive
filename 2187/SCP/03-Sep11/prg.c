#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  int a = 17;
  int b = 5;
  int c;
  c = a < b || a == b;
  printf("%d < %d || %d == %d ==> %d\n",a,b,a,b, c);
  c = a > b || a == b;
  printf("%d > %d || %d == %d ==> %d\n", a, b, a, b, c);
  c = a < b && a == b;
  printf("%d < %d && %d == %d ==> %d\n", a, b, a, b, c);
  c = a > b && a == b;
  printf("%d > %d && %d == %d ==> %d\n", a, b, a, b, c);
  c = a > b && a != b;
  printf("%d > %d && %d != %d ==> %d\n", a, b, a, b, c);
  c = !(a > b);
  printf("!(%d > %d) ==> %d\n",a, b, c);
  c = !a;
  printf("!%d ==> %d\n",a, c);
  c = !!a;
  printf("!!%d ==> %d\n", a, c);

  return 0;
}
