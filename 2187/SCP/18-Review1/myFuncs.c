#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myFuncs.h"

void foo(void) {
  faa(3);
  printf("foo\n");
}


void faa(int a) {
  printf("faa: %d\n", a);
}


int fee(int a, int b) {
  int i;
  for (i = 0; i < b; i++)
    printf("%d ", a);
  putchar('\n');
  return a * b;
}