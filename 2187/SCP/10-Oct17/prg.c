#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Employee {
  double salary;
  int empno;
  int sen;
};
int main(void) {
  int i;
  int* p;
  double d;
  double* q;
  struct Employee e;
  struct Employee* ep;
  p = &i;
  printf("address of i: %u\n", p);
  p = p + 1;
  printf("address of the integer next to i is: %u\n", p);

  q = &d;
  printf("address of d: %u\n", q);
  q++;
  printf("address of the double next to d is: %u\n", q);

  ep = &e;
  printf("address of e: %u\n", ep);
  ep++;
  printf("address of the Employee next to e is: %u\n", ep);

  return 0;
}







