#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int num;
  printf("--==Number analyzer==--\n");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("You entered %d\n", num);
  if (num) {
    printf("The number you entered is not Zero.\n");
  }
  if (num > 5) {
    printf("The number you entered is greater than 5.\n");
  }
  if (num % 2 == 0) {
    printf("The number you entered is even.\n");
  }
  if (num % 4 == 0) {
    printf("The number you entered is divisable by 4.\n");
  }
  if (num % 8 == 0) {
    printf("The number you entere is divisable by 8.\n");
  }
  return 0;
}