#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int mark;
  printf("Please enter your mark: ");
  scanf("%d", &mark);
  if (mark < 50) {
    printf("You got F\n");
  }
  else if (mark < 60) {
    printf("You got D\n");
  }
  else if (mark < 70) {
    printf("You got C\n");
  }
  else if (mark < 80) {
    printf("You got B\n");
  }
  else if (mark < 90) {
    printf("you got A\n");
  }
  else {
    printf("you got A+\n");
  }
  return 0;
}
