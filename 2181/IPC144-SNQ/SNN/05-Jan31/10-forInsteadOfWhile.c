#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int length;
  int i;
  printf("How long the bar should be? ");
  scanf("%d", &length);
  printf("Here is your bar: \n");
  //i = 0;
  //while (i< length) {
  for(i=0;i<length;i++){  // The same as while!!!
    printf("-");
    //i++;
  }
  printf("\n");

  return 0;
}