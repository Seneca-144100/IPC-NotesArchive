#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tools.h"

double Avrg(double num1, double num2) {
  double res;
  res = (num1 + num2) / 2;
  return res;
}

//int main() {
//  double A;
//  double B;
//  double res;
//  printf("Please enter 2 values for find the average for:\n");
//  A = getDouble();
//  B = getDouble();
//  res = Avrg(A, B);
//  printf("The average is %.2lf\n", res);
//  return 0;
//}

int main() {
    double res;
    printf("Please enter 2 values for find the average for:\n");
    res = Avrg(getDouble(), getDouble());
    printf("The average is %.2lf\n", res);
    return 0;
  }