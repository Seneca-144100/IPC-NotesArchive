#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int mark;
  printf("Please enter you mark out of 100: ");
  scanf("%d", &mark);
  printf("Your mark is ");
  if (mark < 0 || mark > 100) {
    printf("invalid");
  }
  else {
    if (mark < 50) {
      printf("F");
    }
    else {
      if (mark < 60) {
        printf("D");
      }
      else {
        if (mark < 70) {
          printf("C");
        }
        else {
          if (mark < 80) {
            printf("B");
          }
          else {
            if (mark < 90) {
              printf("A");
            }
            else {
              printf("A+");
            }
          }
        }
      }
    }
  }
  printf(".\n");
  return 0;
}