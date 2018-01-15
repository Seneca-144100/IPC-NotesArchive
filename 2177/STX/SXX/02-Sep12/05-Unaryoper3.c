#include <stdio.h>
int main(void) {
  int a = 5;
  printf("Unary -a: %d\n", -a); // no side effect
  printf("a: %d\n", a);
  a = -a;
  printf("a: %d\n", a);

  return 0;
}