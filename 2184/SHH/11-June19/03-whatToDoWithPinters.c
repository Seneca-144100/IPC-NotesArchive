#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
void badSetToZero(int a) {
  a = 0;
}
void setToZero(int* p) {
  *p = 0;
}
int main(void) {
  int var = 2345;
  badSetToZero(var);
  printf("%d\n", var);
  setToZero(&var);
  printf("%d\n", var);
  return 0;
}