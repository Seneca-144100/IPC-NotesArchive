#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void remValue(int val) {
  printf("Remaining cents: %d\n", val);
}

void coins(double money) {
  int cents;
  printf("The amount entered is: %.2lf\n", money);
  cents = money * 100;
  printf("Toonies: %d\n", cents / 200);
  cents = cents % 200;
  remValue(cents);
  printf("Loonies: %d\n", cents / 100);
  cents = cents % 100;
  remValue(cents);
  printf("Quarters: %d\n", cents / 25);
  cents = cents % 25;
  remValue(cents);
  printf("Dimes: %d\n", cents / 10);
  cents = cents % 10;
  remValue(cents);
  printf("Nickles: %d\n", cents / 5);
  cents = cents % 5;
  remValue(cents);
}

