#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void badAddOne(int value);
void addOne(int* valuePointer);

int main(void) {
  int i = 24;
  badAddOne(i);
  printf("%d\n", i);
  addOne(&i);
  printf("%d\n", i);
  return 0;
}

void addOne(int* ptr) {
  *ptr = *ptr + 1;
}

void badAddOne(int val) {
  val = val + 1;
}



