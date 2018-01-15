#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
/*
  if (condition) {
    Var = Value1;
  }
  else {
    Var = Value2;
  }

  Var = condition ? Value1 : Value2;
  */

  int a;

  scanf("%d", &a);

  a > 10 ? printf("greater than 10") : printf("Less than or equal to 10");

  if (getint() < 5) {
    
  }

  return 0;
}