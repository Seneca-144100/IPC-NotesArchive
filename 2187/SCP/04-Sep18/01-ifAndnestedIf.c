#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int num;
  printf("Please enter an integer: ");
  scanf("%d", &num);
  if (num < 10) {
    printf("%d is less than 10\n", num);
  }
  else {
    // if num is equal to ten
    if (num == 10) {
      printf("10 is equal 10\n");
    }
    else {
      printf("%d is greater than 10\n", num);
    }
  }
  return 0;
}
