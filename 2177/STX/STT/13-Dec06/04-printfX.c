#define _CRT_SECURE_NO_WARNINGS
//gcc prg.c utilities.c 
#include <stdio.h>
#include "utilities.h"
int main(void) {
  int X = 0xf9;
  printf("%X  %x %d\n", X, X, X);
  return 0;
}