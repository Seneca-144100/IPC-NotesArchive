#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "tools.h"


int main(void) {
  int noOfSt;
  printf("Please enter the number of students: ");
  noOfSt = getLimitedInt(5, 35);
  return 0;
}