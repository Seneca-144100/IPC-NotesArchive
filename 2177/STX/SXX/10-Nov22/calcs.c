#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
gcc calcs.c utitities.c <ENTER>
*/

void title(void);
int menu(void);
int getSelection(int min, int max);
void SumOfTwo(void);
void SumOfNumbers(void);
void ShoppingCost(void);
void flushKeyboard(void);
int getInt(void);
double getDouble(void);
void pause(void);

int main(void) {
  int selection = 1;// set to one to enter the loop
  title();  
  while (selection != 0) {
    selection = menu();
    switch (selection){
    case 1:
      SumOfTwo();
      pause();
      break;
    case 2:
      SumOfNumbers();
      pause();
      break;
    case 3:
      ShoppingCost();
      pause();
      break;
    default:
      printf("Goodbye!\n");
      break;
    }
  }
  printf("The selection is %d\n", selection);
  return 0;
}
int menu(void) {
  int selection;
  printf("1- Sum of two numbers\n");
  printf("2- Sum of numbers and max and min\n");
  printf("3- Shopping Cost Calculation\n");
  printf("0- Exit program\n");
  printf("> ");
  selection = getSelection(0,3);
  return selection;
}

void title(void) {
  printf("----==== Calculations ====----\n");
}

void SumOfTwo(void) {
  double num1;
  double num2;
  double res;
  printf("First number: ");
  num1 = getDouble();
  printf("Second number: ");
  num2 = getDouble();
  res = num1 + num2;
  printf("The sum is %.3lf\n", res);
}
void SumOfNumbers(void) {
  int cnt;
  int i;
  double num;
  double min;
  double max;
  double sum = 0;
  printf("Please enter the number of entries: ");
  cnt = getSelection(2, 999);
  for (i = 0; i < cnt; i++) {
    printf("%3d: ", i + 1);
    num = getDouble();
    if (i == 0) { // first loop
      min = max = num;
    }
    else {
      if (num < min) min = num;
      if (num > max) max = num;
    }
    sum += num;
  }
  printf("The sum of the numbers is:    %15.3lf\n", sum);
  printf("The minimum value entered is: %15.3lf\n", min);
  printf("The maximum value entered is: %15.3lf\n", max);
  pause();
}
void ShoppingCost(void) {
  printf("Executing ShoppingCost\n");
}