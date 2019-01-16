#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int     %d
char    %c

float                
double
long double
*/
int main(void) {
  double num1;  // first number to read
  double num2;
  double sum;
  printf("Sum calculator program.\n");
  printf("Please enter the first number: ");
  // read num1
  scanf("%lf", &num1);
  printf("Please enter the second number: ");
  // read num2
  scanf("%lf", &num2);
  sum = num1 + num2;
  // print sum
  //printf("The sum of the two values are: %d\n", sum);
  printf("The sum of %lf and %lf is: %lf\n",
                                     num1, num2, sum);
  return 0;
}
