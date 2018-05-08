#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a[10] = { 23, 56, 12, 89 };
  int b[10] = { 0 };
  int c[10];
  int i;
  for (i = 0; i < 10; i++) {
    printf("a[%d]:%3d, b[%d]:%3d, c[%d]:%3d\n", i, a[i], i, b[i], i, c[i]);
  }
  return 0;
}