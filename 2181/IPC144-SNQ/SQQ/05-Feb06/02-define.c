#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SUM a+b
int main(void) {
  int a = 3;
  int b = 4;
  int c;
  c = 2 * SUM;// not 14 but 10 is the answer since SUM is replaced with a+b
              // before compilation
  printf("c: %d\n", c);
  return 0;
}