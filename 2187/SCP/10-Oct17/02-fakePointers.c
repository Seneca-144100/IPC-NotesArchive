#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ptr.h"

int main(void) {
  int var;
  int pointer ptr;
  ptr = addressOf var;
  targetOf ptr = 2345;
  printf("target of ptr: %d\n", targetOf ptr);
  printf("var by itself: %d\n", var);
  printf("var's address in memory is: %u\n", ptr);
  return 0;
}







