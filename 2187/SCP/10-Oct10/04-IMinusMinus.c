#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gcc prg.c myio.c funcs.c -o project<ENTER>
int main(void) {
  int i;
  i = 4;
  printf("%d", i--);// printf("%d", i) ;i = i - 1; 
  printf("%d\n", --i);// i = i - 1; printf("%d", i);
  return 0;
}