#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnIntArray(int* p, int size) {
  int i;
  for (i = 0; i < size; i++,p++) {
    printf("%d ", *p);
  }
  printf("\n");
}
int main(void) {
  int a[5] = { 10, 20, 30, 40, 50 };
  int i;
  prnIntArray(a, 5);
  printf("%d\n", *a);
  return 0;
}
