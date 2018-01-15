#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int numsToPrint = 1;
  while (numsToPrint <= 10) {
    printf("%d ", numsToPrint);
    numsToPrint++;
  }
  printf("\ndone!\n");
  return 0;
}