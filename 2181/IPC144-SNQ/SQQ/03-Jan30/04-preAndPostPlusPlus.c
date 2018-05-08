#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int a = 13;
  int b = 10;
  int c;

 // a = a * 10;
 // a *= 10;

  //b = b + 1;
 // b += 1;
  ++b;
  printf("b: %d\n", b);
  b++;
  printf("b: %d\n", b);
  c = ++b;
  printf("c: %d b: %d\n", c, b);
  c = b++;
  printf("c: %d b: %d\n", c, b);
  printf("b: %d\n", b++);
  printf("b: %d\n", ++b);
  //a = a++ + ++a - b++; // don't do this, bad for your health!!!!
  return 0;
}