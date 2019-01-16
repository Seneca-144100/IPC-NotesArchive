#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
void swap(int* a, int* b) {
  int buf = *a;
  *a = *b;
  *b = buf;
}
int main(void) {
  int a[5] = { 3, 2, 5, 1, 8 };
  int size = 5;
  int i;
  int j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - 1 - i; j++) {
      if (a[j] > a[j + 1]) {
        swap(&a[j], &a[j + 1]);
      }
    }
  }
  for (i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}