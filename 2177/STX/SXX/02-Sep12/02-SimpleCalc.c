#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int number1;
  int number2;
  int prod;
  printf("Please enter the first number: ");
  scanf("%d", &number1);
  printf("Please enter the second number: ");
  scanf("%d", &number2);
  prod = number1 * number2;
  printf("%d X %d is %d\n", number1, number2, prod);
  return 0;
}