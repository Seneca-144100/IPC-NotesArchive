#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void badAddOne(int value);
void addOne(int* addressOfVariable);

int main(void) {
  int A = 24;
  int X = 234;
  badAddOne(A);
  printf("%d\n", A);
  addOne(&A);
  printf("%d\n", A);
  addOne(&X);
  printf("%d\n", X);
  return 0;
}

void addOne(int* ptr) {
  *ptr = *ptr + 1;
}

void badAddOne(int B) {
  B = B + 1;
}
