#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
  int cnt;
  double number;
  double biggest = 0.0;
  for (cnt = 0; cnt < 4; cnt++) {
    printf("Number: ");
    scanf("%lf", &number);
    if (biggest < number) {
      biggest = number;
    }
  }
  printf("The biggest number is: %.3lf\n", biggest);
  return 0;
}