#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SUM a+b
int main(void) {
  int a = 0;
  while (a < 10) {
    printf("row: %d, Inner Value of a: %d\n",a+ 1, a);
    a++;
  }
  printf("outter value of a:%d\n", a);
  printf("Goodbye!\n");
  return 0;
}