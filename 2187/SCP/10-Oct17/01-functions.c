#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//type funcName(type a, type b, type c)
//
//int getInt(void);
//int getLimitedInt(int minValidValue, int maxValidValue);
//double getLimitedDouble(double minValid, double maxValid);
#include "myIO.h"
#include "myIO.h"
#include "myIO.h"

int main(void) {
  int num;
  int age;
  int mark;
  double gpa;
  printf("Please a number: ");
  num = getInt();
  printf("The number is %d\n", num);
  printf("Please enter your age: ");
  age = getLimitedInt(0, 130);
  printf("Please enter you mark: ");
  mark = getLimitedInt(0, 35);
  printf("You are %d years old and"
         " you got %d in your test!\n"
          , age, mark);
  printf("Please enter you gpa: ");
  gpa = getLimitedDouble(0, 4.0);
  printf("Your gpa is: %.1lf\n", gpa);
  return 0;
}