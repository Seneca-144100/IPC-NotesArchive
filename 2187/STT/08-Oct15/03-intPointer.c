#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ptr.h"
#include "myIO.h"
/*
a = a * b;
int    *   ptr;
struct Student * ptr;
a = *b * *c;
*/

int main(void) {
  int var;
  int* ptr;
  ptr = &var;
  *ptr = 2345;
  printf("%d\n", var);
  printf("%d\n", *ptr);
  printf("%u\n", ptr);
  ptr++;
  printf("%u\n", ptr);
  printf("%d\n", *ptr);

  return 0;
}













