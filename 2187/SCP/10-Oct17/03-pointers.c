#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
a = b * c;   a is set to b multiply by c;
double*   p;   double pointer p;
struct Employee* ep;  struct employee pointer ep;

x = *y * *z;  x is set to target of y multiply by target of z
*/

int main(void) {
  int var;
  int * ptr;
  ptr = &var;
  *ptr = 2345;
  printf("target of ptr: %d\n", *ptr);
  printf("var by itself: %d\n", var);
  printf("var's address in memory is: %u\n", ptr);
  return 0;
}







