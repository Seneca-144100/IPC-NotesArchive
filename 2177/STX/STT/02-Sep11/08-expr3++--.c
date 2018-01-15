#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 5;
  printf("a: %d\n", a);
  printf("a: %d\n", a++);
  printf("a: %d\n", ++a);

  return 0;
}