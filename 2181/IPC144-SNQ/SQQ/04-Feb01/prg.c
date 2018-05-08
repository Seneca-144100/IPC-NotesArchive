#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int length;
  int i = 0;
  int done = 0;
  while (!done) {
    printf("how long would you like the line to be? ");
    scanf("%d", &length);
    i = 0;
    while (i < length) {
      printf("-");
      i++;
    }
    printf("\n");
    printf("done? (1/0) ");
    scanf("%d", &done);
  }
  printf("Goodbye!\n");
  return 0;

}