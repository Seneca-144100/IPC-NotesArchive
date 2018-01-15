#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  char name[41];
  double gpa;
};

void doubleTheValue(int* valptr) {
  *valptr = *valptr * 2;
}

int main(void) {
  int a;
  int* p;
  p = &a;
  a = 10;
  *p = 10;
  doubleTheValue(&a);

  doubleTheValue(p);
  return 0;
}