#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int numsToPrint = 1;
  do{
    printf("%d ", numsToPrint);
    numsToPrint++;
  }while (numsToPrint <= 10);
  printf("\ndone!\n");
  return 0;
}