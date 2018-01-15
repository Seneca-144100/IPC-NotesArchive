#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
  int numToPrint = 1;
  while (numToPrint <= 10)
  {
    printf("%d ", numToPrint++);
//    numToPrint = numToPrint + 1;
//    numToPrint += 1;
  }
  printf("\n");

  return 0;
}