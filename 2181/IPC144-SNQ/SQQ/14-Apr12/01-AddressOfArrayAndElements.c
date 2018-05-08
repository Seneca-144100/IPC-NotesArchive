#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a[10] = { 10, 20, 30, 40,50, 60, 70 , 80, 90, 100 };
  printf("Address of int a[]: hex:%x, HEX:%X, Pure:%p, integer:%u\n",a,a, a, a);
  printf("Address of a[2]:%u\n", &a[2]);
  getchar();
  printf("Address of a[3]:%u\n", &a[3]);
  return 0;
}