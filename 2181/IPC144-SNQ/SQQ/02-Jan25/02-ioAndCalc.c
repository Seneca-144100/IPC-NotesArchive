#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
  int firstNumber;
  int secondNumber;
  int result;
  printf("Please enter two integers to multiply:\n");
  printf("First Number: ");
  scanf("%d", &firstNumber);
  printf("Second Number: ");
  scanf("%d", &secondNumber);
  result = firstNumber * secondNumber;
//  printf("Result is: %d\n", result);
  printf("%d x %d is %d\n", firstNumber, secondNumber, result);
  printf("Goodbye!\n");
  return 0;
}
