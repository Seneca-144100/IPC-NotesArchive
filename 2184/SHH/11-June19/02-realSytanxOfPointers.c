#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
/*
a = b * c;  // mult
int* ptr;   // integer pointer
char* str;  // character pointer
struct Car*   fardadsCar;  // struct Car pointer

a =  * b * * c;    a is set to target of B multiply by target fo C;
b and c are pointers;
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
  return 0;
}