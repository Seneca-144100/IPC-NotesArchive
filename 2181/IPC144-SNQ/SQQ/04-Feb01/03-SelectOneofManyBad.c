#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int mark;
  printf("What is you mark out of 100? ");
  scanf("%d", &mark);
  printf("Your mark is ");
  if (mark > 0 && mark < 50) {
    putchar('F');
  }
  if (mark >= 50 && mark < 60) {
    printf("D");
  }
  if (mark >= 60 && mark < 70) {
    printf("C");
  }
  if (mark >= 70 && mark < 80) {
    printf("B");
  }
  if (mark >= 80 && mark < 90) {
    printf("A");
  }
  if (mark >= 90 && mark <= 100) {
    printf("A+");
  }
  printf(".\n");
  return 0;
  
}