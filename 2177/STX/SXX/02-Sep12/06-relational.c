#include <stdio.h>
int main(void) {
  int a = 5;
  int b = 10;
  int c;
  c = b > a;
  printf("%d > %d is %d\n", b, a, c);
  c = b >= a;
  printf("%d >= %d is %d\n", b, a, c);
  c = b < a;
  printf("%d < %d is %d\n", b, a, c);
  c = b <= a;
  printf("%d <= %d is %d\n", b, a, c);
  c = b == a;
  printf("%d == %d is %d\n", b, a, c);
  c = b != a;
  printf("%d != %d is %d\n", b, a, c);

  return 0;
}