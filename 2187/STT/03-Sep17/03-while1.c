#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt = 1;
  int NoOfPpl;  // Number of people in line
  printf("Welcome to Seneca Bar & Grill!\n");
  printf("How many guests today? ");
  scanf("%d", &NoOfPpl);
  while (cnt <= NoOfPpl) {
    printf("Welcome, ID please guest number %d:\n", cnt);
    cnt = cnt + 1;
  }
  return 0;
}