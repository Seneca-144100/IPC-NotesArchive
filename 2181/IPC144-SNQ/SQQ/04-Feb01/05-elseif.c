#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int mark;
  printf("What is you mark out of 100? ");
  scanf("%d", &mark);
  printf("Your mark is ");
  if (mark < 0) {
    printf("invalid");
  }
  else if (mark < 50) {
    putchar('F');
  }
  else if ( mark < 60) {
    printf("D");
  }
  else if (mark < 70) {
    printf("C");
  }
  else if (mark < 80) {
    printf("B");
  }
  else if (mark < 90) {
    printf("A");
  }
  else if (mark <= 100) {
    printf("A+");
  }
  else {
    printf("Invalid");
  }

  printf(".\n");
  return 0;

}