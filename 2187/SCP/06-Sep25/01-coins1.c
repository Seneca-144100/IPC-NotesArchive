#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void coins(double money);
double getDouble(void);


int main(void) {
  double mvalue;
  printf("Please enter the money value: ");
  mvalue = getDouble();
  coins(mvalue);
  return 0;
}

// gcc -Wall prg.c myCoins.c -o coins

