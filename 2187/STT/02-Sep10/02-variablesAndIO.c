#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  // char, short
  // int, long, long longread notes 
  // https://scs.senecac.on.ca/~ipc144/pages/content/varia.html
  int num1;
  int num2;
  int sum;
  printf("Calculating sum of two numbers!\n");
 
  /* format specifiers
  char %c
  int %d
  */
  printf("Enter first number: ");
  // read num1 
  // scan an int and put is in the address of num1
  scanf("%d", &num1);
  printf("Enter second number: ");
  // read num2 
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("The sum of %d and %d is: %d\n",num1, num2, sum);
  // print "The sum is : value Of sum";

  return 0;
}