#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int age;
  printf("Welcome to Seneca pub!!!\n");
  printf("How old are you? ");
  scanf("%d", &age);
  if (age >= 19) {
    printf("What would you like to drink?\n");
  }
  if (age < 19) {
    printf("Sorry you must be 19 or older to be served here!\n");
    printf("Get out of here!!!!\n");
  }
  return 0;
}