#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int     %d
char    %c
*/
int main(void) {
  int num1;  // first number to read
  int num2;
  int sum;
  printf("Sum calculator program.\n");
  printf("Please enter the first number: ");
  // read num1
  scanf("%d", &num1);
  printf("Please enter the second number: ");
  // read num2
  scanf("%d", &num2);
  sum = num1 + num2;
  // print sum
  //printf("The sum of the two values are: %d\n", sum);
  printf("The sum of %d and %d is: %d\n",
                                     num1, num2, sum);
  return 0;
}
