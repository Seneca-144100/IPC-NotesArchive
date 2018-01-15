#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int num1;
  int num2;
  char biggerOne;
  printf("---=== Max finder ===---\n");
  printf("Please enter two integers:\n");
  printf("A- ");
  scanf("%d", &num1);
  printf("B- ");
  scanf("%d", &num2);
  /*if (num1 > num2) {
    biggerOne = 'A';
  }
  else {
    biggerOne = 'B';
  }*/
  biggerOne = num1 > num2 ? 'A' : 'B';
  printf("%c is bigger!\n", biggerOne);
  return 0;
}