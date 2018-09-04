#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int age;
  printf("Please enter you age: ");
  scanf("%d", &age);
  while (age < 18 || age >= 75) {
    printf("Invalid age, valid values are between, 18 and 75: ");
    scanf("%d", &age);
  }
  printf("Everything is good!\n");
  return 0;
}