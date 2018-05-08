#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a[10] = { 23, 56, 1, 6 };
  float b[10] = { 0.0 };
  int i;
  for (i = 0; i < 10; i++) {
    printf("a[%d]:%d    b[%d]:%f\n", i, a[i], i, b[i]);
  }


  return 0;
}