#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a;
  printf("Welcome to Seneca Bar & Grill.\n");
  printf("How old are you? ");
  scanf("%d", &a);
  if (a >= 19) {
    printf("What would you like to drink?\n");
  }
  else {
    printf("Get out of here!, security get him a pepsi!.....\n");
  }
  return 0;
}