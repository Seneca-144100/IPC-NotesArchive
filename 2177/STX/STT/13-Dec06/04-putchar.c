#define _CRT_SECURE_NO_WARNINGS
//gcc prg.c utilities.c 
#include <stdio.h>
#include "utilities.h"
int main(void) {
  int X = 67;
  putchar('A');
  putchar(66);
  putchar(X);
  X++;
  putchar(X);
  putchar('\n');
  return 0;
}