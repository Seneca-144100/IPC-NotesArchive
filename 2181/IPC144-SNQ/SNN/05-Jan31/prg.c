#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int length;
  int i;
  printf("How long the bar should be? ");
  scanf("%d", &length);
  printf("Here is your bar: \n");
  i = 0;
  do {
    printf("-");
    i++;
  }while (i < length);
  printf("\n");

  return 0;
}