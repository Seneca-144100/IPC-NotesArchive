#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int numsToPrint;

  numsToPrint = 1;
  while (numsToPrint <= 10) {
    printf("%d ", numsToPrint);
    numsToPrint++;
  }
  printf("\n");
  for (numsToPrint = 1; numsToPrint <= 10; numsToPrint++) {
    printf("%d ", numsToPrint);
  }

  printf("\ndone!\n");
  return 0;
}