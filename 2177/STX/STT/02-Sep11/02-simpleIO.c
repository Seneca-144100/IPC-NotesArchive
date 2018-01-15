#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int number;
  printf("Please enter an integer number: ");
  scanf("%d", &number);
  printf("The number is %d.\n", number);
  return 0;
}