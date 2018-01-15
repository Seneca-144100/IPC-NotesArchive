#define _CRT_SECURE_NO_WARNINGS
//gcc prg.c utilities.c 
#include <stdio.h>
#include "utilities.h"
int main(void)
{
  int i;
  for (i = 0; i < 99999999; i++) {
    printf("%08d\r", i);
  }
  printf("\n");
  return 0;
}