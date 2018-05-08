#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int length;
  int i;
  int done = 0;
  while (!done) {
    printf("How long the bar should be? ");
    scanf("%d", &length);
    printf("Here is your bar: \n");
    i = 0;
    while (i < length) {
      printf("-");
      i++;
    }
    printf("\n");
    printf("Done? (1/0): ");
    scanf("%d", &done);
  }
  return 0;
}