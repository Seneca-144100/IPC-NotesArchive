#define _CRT_SECURE_NO_WARNINGS /* no erros on input fuctions  */
#include <stdio.h>
int main(void) {
  int packs;
  printf("How many boxes of beer you got? ");
  scanf("%d", &packs);
  printf("You got %d cans of beer!\n", packs * 12);
  return 0;
}