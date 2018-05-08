
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int done = 0;
  int age;
  while (!done) {
    printf("Welcome to Seneca bar.\n");
    printf("How old are you? ");
    scanf("%d", &age);
    if (age >= 19) {
      printf("what would you like to drink?\n");
    }
    else {
      printf("No drinks for you.\n");
      printf("How heck did you get in?\n");
    }
    printf("done? (1/0) ");
    scanf("%d", &done);
  }
  printf("Goodbye!\n");
  return 0;

}