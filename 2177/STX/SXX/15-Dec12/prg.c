#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"

int foo(double x[][3]) {

}

int main(void) {
  double t[2][3] = { {1,2,3} , {4,5,6} };
  double* p = (double*)t;
  int i;
  int j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%.2lf ", t[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < 6; i++) {
    printf("%.2lf ", p[i]);
  }
  printf("\n");
  return 0;
}