#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  if (a > 10) {
    printf("A is greater than ten!\n");
  }
  else {
    if (a == 10) {
      printf("A is ten!\n");
    }
    else {
      printf("A is less than ten!\n");
    }

  }
  return 0;
}