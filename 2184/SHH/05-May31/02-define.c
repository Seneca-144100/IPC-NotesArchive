#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MINAGE  20
#define MAXAGE  75

int main(void) {
  int age;
  printf("Please enter you age: ");
  scanf("%d", &age);
  while (age < MINAGE || age >= MAXAGE) {
    printf("Invalid age, please enter a value between %d and %d: ", MINAGE, MAXAGE);
    scanf("%d", &age);
  }
  printf("Everything good!\n");
  return 0;
}