#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void doubleTheValue(int* valPtr) {
  *valPtr = *valPtr * 2;
}


int main(void) {
  int a;
  int* p;
  p = &a;
  a = 10;
  *p = 10;
  doubleTheValue(&a);
  doubleTheValue(p);

  printf("%d\n", a);
  return 0;
}