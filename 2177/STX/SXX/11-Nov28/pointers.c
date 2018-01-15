#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "fardad.h"


int main(void) {
  int i = 52;
  int* p = &i;


  printf("value of i is %d and 'i' itself starts at %u in memory\n",
    i, p);
  printf("i: %d targetOf p: %d\n", i, * p);
  return 0;
}