#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double getDouble(void);
int main(void) {
  double value;
  double sum = 0.0;
  int cnt;
  printf("Please enter 5 numbers:\n");
  for (cnt = 0; cnt < 5; cnt++) {
    printf("%d > ", cnt + 1);
    value = getDouble();
    //sum = sum + value;
    sum += value;
  }
  printf("The average of the the five numbers is: %.3lf\n", sum / 5);
  return 0;
}