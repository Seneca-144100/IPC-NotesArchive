#include <stdio.h>
int main(void) {
  int a = 5;
  int b;
  printf("a: %d\n", a);
  a = a + 1;
  printf("a: %d\n", a);
  ++a;
  printf("a: %d\n", a);
  a++;
  printf("a: %d\n", a);
  a = 1;
  b = ++a;
  printf("a: %d, b: %d\n",a, b);
  b = a++;
  printf("a: %d, b: %d\n",a, b);
  return 0;
}