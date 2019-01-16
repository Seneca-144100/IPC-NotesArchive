#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeMaker(double money);
double getDouble(void);


int main(void) {
  double value;
  printf("Please enter the money value: ");
  value = getDouble();
  changeMaker(value);
  return 0;
}