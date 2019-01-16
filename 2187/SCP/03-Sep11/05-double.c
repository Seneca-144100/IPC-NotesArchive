#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  double a = 17;
  double b = 5;
  double c;
  c = a + b;
  printf("%lf + %lf = %lf\n",a, b, c);
  c = a - b;
  printf("%lf - %lf = %lf\n", a, b, c);
  c = a * b;
  printf("%lf * %lf = %lf\n", a, b, c);
  c = a / b;
  printf("%lf / %lf = %lf\n", a, b, c);
  /*c = a % b; mod does not work with real numbers
  printf("%lf %% %lf = %lf\n", a, b, c);
  */
  return 0;
}
