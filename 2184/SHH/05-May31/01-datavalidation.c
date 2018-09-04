#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int age;
  printf("Please enter you age: ");
  scanf("%d", &age);
  while (age < 20 || age >= 75) {
    printf("Invalid age, please enter a value between 20 and 75: ");
    scanf("%d", &age);
  }
  printf("Everything good!\n");
  return 0;
}