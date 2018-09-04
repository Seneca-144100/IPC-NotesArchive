#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int age;
  printf("Please enter your age: ");
  scanf("%d", &age);
  printf("You are %d months old!\n", age * 12);
  return 0;
}