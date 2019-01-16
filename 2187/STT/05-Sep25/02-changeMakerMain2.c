#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeMaker(double money);
double getDouble(void);
int main(void) {
  printf("Please enter the money value: ");
  changeMaker(getDouble());
  return 0;
}