#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
#include "pointerlecture.h"
int main(void) {
  int var;
  int pointer ptr;
  ptr = AddressOf var;
  TargetOf ptr = 2345;
  printf("%d\n", var);
  printf("%d\n", TargetOf ptr);
  printf("%u\n", ptr);
  return 0;
}