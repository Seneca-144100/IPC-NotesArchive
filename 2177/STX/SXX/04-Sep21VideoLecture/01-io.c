#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int num;
  printf("--==Number analyzer==--\n");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("You entered %d\n", num);
  return 0;
}