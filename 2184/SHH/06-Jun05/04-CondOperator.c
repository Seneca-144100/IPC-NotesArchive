#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int num1;
  int num2;
  int max;
  printf("Please enter two ints: ");
  scanf("%d %d", &num1, &num2);
 /* if (num1 > num2) {
    max = num1;
  }
  else {
    max = num2;
  }*/

  max = num1 > num2 ? num1 : num2;
  printf("%d is the larger value!\n", max);
  return 0;
}