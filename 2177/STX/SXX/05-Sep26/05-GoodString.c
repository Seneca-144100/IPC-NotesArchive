#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char n[100];
  n[0] = 'F';
  n[1] = 'r';
  n[2] = 'e';
  n[3] = 'd';
  n[4] = 0;  // null terminated, hence it is a string.
  printf("%s\n", n);
  return 0;
}