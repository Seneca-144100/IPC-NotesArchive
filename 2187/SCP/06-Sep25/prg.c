#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double getDouble(void);


int main(void) {
  int cnt;
  double number[5];
  double sum = 0.0;
  printf("Please enter 5 numbers:\n");
  for (cnt = 0; cnt < 5; cnt++) {
    printf("%d > ", cnt + 1);
    number[cnt] = getDouble();
    sum += number[cnt];
    // sum = sum + number[cnt];
  }
  for (cnt = 0; cnt < 5; cnt++) {
    printf("%.2lf ", number[cnt]);
  }
  printf("\n");
  printf("The average of the four numbers is: %.3lf\n", sum / 5);
  return 0;
}

// gcc -Wall prg.c myCoins.c -o coins

