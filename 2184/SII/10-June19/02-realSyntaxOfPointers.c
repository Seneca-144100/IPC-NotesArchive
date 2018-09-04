#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
/*
a = b * c;   // b multilied by c
int*   ptr;  // integer pointer ptr
struct Student* sptr;   // struct Student pointer stpr...
double* ptr;
struct Car* ptr;
a = b * *c;   // a set to b multiply by target Of c
x = *y * *z; // x set to targer of y mult by target of z

*/

int main(void) {
  int var;
  int*   ptr;
  double* dptr;
  char*  cptr;
  ptr = &var;
  *ptr = 2345;
  printf("%d\n", var);
  printf("%d\n", *ptr);
  printf("%u\n", ptr);
  return 0;
}