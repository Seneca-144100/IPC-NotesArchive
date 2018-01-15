#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
to compile this code on matrix you will do as follows:

gcc calcs.c utilities.c <ENTER>

*/
/* 
char 
short 
int ]
long 
long long

float
double
long double

*/
void title(void);
int menu(void);
int getSelection(int min, int max);
void flushKeyboard(void);
void pause(void);
void SumOfTwo(void);
void SumOfNumbers(void);
void ShoppingCost(void);
double getDouble(void);
int getInt(void);

int main(void) {
  int selection;
  title();
  do {
    selection = menu();
    /*switch (selection) {
    case 1:
      SumOfTwo();
      break;
    case 2:
      SumOfNumbers();
      break;
    case 3:
      ShoppingCost();
      break;
    default:
      printf("Goodbye!\n");
    }*/
    if (selection == 1) {
      SumOfTwo();
    }
    else if (selection == 2) {
      SumOfNumbers();
    }
    else if (selection == 3) {
      ShoppingCost();
    }
    else {
      printf("Goodbye!\n");
    }
  }while(selection != 0);

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
int getSelection(int min , int max) {
  int value;
  do {
    value = getInt();
    if (value < min || value > max) {
      printf("bad value; %d <= value <= %d, re-enter: ", min, max);
    }
  } while (value < min || value > max);
  return value;
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
  pause();
}
void SumOfNumbers(void) {
  int cnt; // number of values
  int i;  // loop counter
  double num; // get the current number from user
  double min; // update to min of all numbers
  double max; // undate to max of all numbers
  double sum = 0; // the sum of all numbers
  printf("Please enter the number of entries: ");
  cnt = getInt();
  for (i = 0; i < cnt; i++) {
    printf("%3d: ", i + 1);
    num = getDouble();
    if (i == 0) {
      min = max = num;
    }
    else {
      if (num < min) min = num;
      if (num > max) max = num;
    }
    sum += num;
  }
  printf("The sum of the numbers is:    %15.3lf\n", sum);
  printf("The minimum value enteerd is: %15.3lf\n", min);
  printf("The maximum value entered is: %15.3lf\n", max);
  pause();
}
void ShoppingCost(void) {
  printf("Executing ShoppingCost\n");
  pause();
}