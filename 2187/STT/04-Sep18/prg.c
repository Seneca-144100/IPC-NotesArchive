#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  double val = 123.456123;
  float fval = 1.234;
  float fval2 = 1.99;
  int myCastedValue;
  myCastedValue = fval2;
  printf("double value is: %.2lf\n", val);
  printf("double value is: %.3lf\n", val);
  printf("float value is: %.1f\n", fval);
  printf("second float value is: %.0f\n", fval2);
  printf("My forced casted value: %d\n", myCastedValue);
  printf("Casted double value: %d\n", (int)val);
  printf("val + myCastedValue: %lf\n", myCastedValue + val);
  printf("val + myCastedValue: %d\n", myCastedValue + (int)val);
  return 0;
}