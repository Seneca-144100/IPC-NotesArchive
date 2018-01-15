#define _CRT_SECURE_NO_WARNINGS
//gcc prg.c utilities.c 
#include <stdio.h>
#include "utilities.h"
int main(void) {
  char name[16];
  printf("name: ");
  scanf("%15[^\n]", name);
  printf("name: *%-15s*\n", name);
  return 0;
}