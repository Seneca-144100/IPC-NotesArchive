#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void prnIntArray(int p[], int size) {
void prnIntArray(int* p, int size) {
    int i;
  for (i = 0; i < size; i++) {
    printf("%d ", p[i]);
  }
  printf("\n");
}

int main(void) {
  int a[5] = { 10, 20, 30, 40, 50 };
  printf("The first element of array a is: %d\n", *a);
  prnIntArray(a, 5);
  return 0;
}