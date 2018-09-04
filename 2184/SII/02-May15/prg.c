#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  double num;
  double a = 10;
  double b = 6;
  num = 10;
  num = num + 1;
  printf("num is: %lf\n", num);
  num = a + b;
  printf("%lf = %lf + %lf\n", num, a, b);
  printf("num is: %lf\n", num);
  num = a - b;
  printf("num is: %lf\n", num);
  num = a * b;
  printf("num is: %lf\n", num);
  num = a / b;
  printf("num is: %lf\n", num);



  return 0;
}