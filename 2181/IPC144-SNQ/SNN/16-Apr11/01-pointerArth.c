#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a[10] = { 10, 20, 30, 40,50, 60, 70 , 80, 90, 100 };
  printf("%u\n", &a[2]);
  printf("%u\n", &a[3]);
  printf("%d\n", *(a + 0));
  printf("%d\n", *(a + 1));

  return 0;
}