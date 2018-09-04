#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"

int main(void) {
  int ar[5] = { 10, 20, 30, 40, 50 };
  printf("%d\n", *ar);
  printf("%d\n", ar[3]);
  printf("%d\n", *(ar + 3));
  printf("%d\n", *ar + 3);



  return 0;
}