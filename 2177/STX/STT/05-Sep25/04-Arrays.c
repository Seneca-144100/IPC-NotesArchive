#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
  int cnt;
  double number[4];
  double biggest = 0.0;
  printf("Please enter 4 numbers:\n");
  for (cnt = 0; cnt < 4; cnt++) {
    printf("%d> ", cnt + 1);
    scanf("%lf", &number[cnt]);
    if (biggest < number[cnt]) {
      biggest = number[cnt];
    }
  }
  printf("the biggest number among ");
  for (cnt = 0; cnt < 4; cnt++) {
    printf("%.3lf ", number[cnt]);
  }
  printf("\n");
  printf("The biggest number is: %.3lf\n", biggest);
  return 0;
}