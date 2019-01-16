#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gcc prg.c myio.c funcs.c -o project<ENTER>
int main(void) {
  char X = 'A';
  char Y = 65;
  printf("%c %c \n", X, Y);
  X++;
  Y += 4;
  printf("%c %c \n", X, Y);

  return 0;
}