#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void foo(void) {
  printf("something....\n");
}

void foo1(int n, int m, char ch) {
  while (n < m) {
    printf("%c", ch + n);
    n++;
  }
  printf("\n");
}

int foo2(void) {
  int num;
  printf("Number: ");
  scanf("%d", &num);
  return num;
}

double foo3(double a, double b) {
  double c;
  c = a * b;
  return c;
}

int main(void){
  int i = 2;
  double d;
  foo();
  foo1(i, 5, 'A');
  i = foo2();
  printf("%d\n", i);
  d = foo3(2.4, 6.6);
  return 0;
}
