#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int num;
  printf("--==Number analyzer==--\n");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("You entered %d\n", num);
  if (num < 0) {
    printf("Sorry, no negative numbers!\n");
  }
  else {
    if (num < 10) {
      printf("You have entered a single digit number.\n");
    }
    else {
      if (num < 100) {
        printf("You have entered a two digit number.\n");
      }
      else {
        if (num < 1000) {
          printf("You have entered a three digit number.\n");
        }
        else {
          if (num < 10000) {
            printf("You have entered a four digit number.\n");
          }
          else {
            printf("This number is too many digits, I can only count to 4!!!\n");
          }
        }
      }
    }
  }
  return 0;
}