#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int mark = 200;
  int done = 0;
  while (!done) {
    printf("Please enter you mark out of 100: ");
    scanf("%d", &mark);
    if (mark > 70) {
      printf("Good Job!\n");
    }
    else if (mark > 50) {
      printf("eh!....\n");
    }
    else {
      printf("Try harder!\n");
    }
    printf("Done? (1/0): ");
    scanf("%d", &done);
  }
  printf("Good bye!\n");
  return 0;
}