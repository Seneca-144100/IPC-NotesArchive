#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
// gcc prg.c myIO.c -o prjName<ENTER>
int main(void) {
  double price;
  printf("Please enter the price: ");
  price = getLimitedDouble(1.0, 3000.00);
  printf("The price is: %.2lf.", price);
  return 0;
}