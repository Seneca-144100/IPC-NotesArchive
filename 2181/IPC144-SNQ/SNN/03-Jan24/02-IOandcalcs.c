/*
1 - prompt for the first number
2 - read the firstr number
3 - prompt for the second number
4 - read the second number
5 - multiply the two and keep the resut
6 - print the result

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  // int firstNumber,secondNumber=2,result=122; // not in my class
  int firstNumber;
  int secondNumber;
  int result;
  printf("Please enter the first number: ");
  scanf("%d", &firstNumber);
  printf("Please enter the second number: ");
  scanf("%d", &secondNumber);
  // minus:- plus:+ mul:* div:/ 
  result = firstNumber * secondNumber;
  // printf("The result is %d\n", result); // bad output
  //  printf("%d", result); // even worse
  printf("%d multiplied by %d is %d.\n", firstNumber, secondNumber, result);
  return 0;
}
