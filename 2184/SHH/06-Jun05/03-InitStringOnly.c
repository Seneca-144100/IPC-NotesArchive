#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char str[10] = "John";
  str = "jack"; // wrong, can't do since str is an array and arrays can only be set with a loop!
  return 0;
}