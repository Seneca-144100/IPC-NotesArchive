#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char ch1 = 65;
  char ch2 = 'A';
  int i = 123;
  float f = 123.456;
  double d = 123.456;
  printf("ch1: %c  ch1 ascii code: %d\n", ch1, ch1);
  printf("ch2: %c  ch2 ascii code: %d\n", ch2, ch2);
  ch2++;
  printf("ch2: %c  ch2 ascii code: %d\n", ch2, ch2);
  printf("int i: %d\n", i);
  printf("float f: %f\n", f);
  printf("double d: %lf\n", d);
  return 0;
}