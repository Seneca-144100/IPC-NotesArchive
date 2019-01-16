#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt = 0;
  int age;
  int NoOfPpl;  // Number of people in line
  printf("Welcome to Seneca Bar & Grill!\n");
  printf("How many guests today? ");
  scanf("%d", &NoOfPpl);
  while (cnt < NoOfPpl) {
    printf("Welcome, guest "
      "number %d of %d;\n"
      , cnt + 1, NoOfPpl);
    printf("How old are you? ");
    scanf("%d", &age);
    if (age >= 19) {
      printf("What would you like to drink?\n");
    }
    else {
      printf("Get out of here!, security get him a pepsi!.....\n");
    }
    cnt = cnt + 1;
  }
  return 0;
}