#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double getDouble(void);
int main(void) {
  double value[5];
  double sum = 0.0;
  int cnt;
  printf("Please enter 5 numbers:\n");
  for (cnt = 0; cnt < 5; cnt++) {
    printf("%d > ", cnt + 1);
    value[cnt] = getDouble();
    //sum = sum + value;
    sum += value[cnt];
  }
  for (cnt = 0; cnt < 5; cnt++) {
    printf("%.2lf ", value[cnt] );
  }
  printf("\nThe average of the the five numbers is: %.3lf\n", sum / 5);
  return 0;
}