#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tools.h"

/*
a = b * c;
int*  a;
struct employee* b;
double* c;

a = b * *c;


*/
void setTo1000(int* ptr);
int main(void) {
  int* p;
  int i;
  int j;
  i = 5;
  p = &i;
  j = *p;
  printf("%d\n", j);
  *p = 234;
  j = i;
  printf("%d\n", j);
  setTo1000(&j);
  printf("%d\n", j);
  return 0;
}

void setTo1000(int* ptr) {
  *ptr = 1000;
}
