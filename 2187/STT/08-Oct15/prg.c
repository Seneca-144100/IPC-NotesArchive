#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "ptr.h"
#include "myIO.h"
/*
a = a * b;
int*   ptr;
a = *b   *   *c;
*/

int main(void) {
  double var;
  double* ptr;
  ptr = &var;
  *ptr = 2345.6789;
  printf("%lf\n", var);
  printf("%lf\n", *ptr);
  printf("%u\n", ptr);
  ptr++;
  printf("%u\n", ptr);
  printf("%lf\n", *ptr);
  printf("Please enter a double: ");
  ptr--;
  scanf("%lf", ptr);
  printf("The double you entered is: %lf\n", var);
  printf("The double you entered is: %lf\n", *ptr);
  return 0;
}













