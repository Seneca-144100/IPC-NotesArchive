#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int numsToPrint;
  numsToPrint = 1;

  while (numsToPrint <= 10) {

    if (numsToPrint > 5) {
      printf("@%d@ ", numsToPrint);
    }
    else {
      printf("#%d# ", numsToPrint);
    }
    numsToPrint++;
  }

  printf("\n");

  
 
  return 0;
}


//numsToPrint = 1;
//while (numsToPrint <= 10) {
//  printf("%d ", numsToPrint);
//  numsToPrint++;
//}