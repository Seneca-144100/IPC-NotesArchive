#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  const double PI = 3.14159265;
  double vPI;
  printf("PI is: %lf\n", PI);
  //pi += 1; // error
  vPI = PI;
  printf("Variable PI is: %lf\n", vPI);
  vPI += 1;
  printf("Variable PI plus one is: %lf\n", vPI);
  return 0;
}