#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





int main(void) {
  int a[5] = { 10, 20, 30, 40, 50 };
  
  int* p = &a[0];
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d ", p[i]);
  }
  printf("\n");
  return 0;
}
