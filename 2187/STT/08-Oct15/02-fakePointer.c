#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ptr.h"
#include "myIO.h"

int main(void) {
  int var;
  int pointer ptr;
  ptr = addressOf var;
  targetOf ptr = 2345;
  printf("%d\n", var);
  printf("%d\n", targetOf ptr);
  printf("%u\n", ptr);
  ptr++;
  printf("%u\n", ptr);
  printf("%d\n", targetOf ptr);

  return 0;
}













