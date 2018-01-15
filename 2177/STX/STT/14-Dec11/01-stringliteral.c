#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char str[10] = "ABCDEFG";
  int i;
  for (i = 0; i < 7; i++) {
    putchar(str[i]);
  }
  putchar('\n');
  return 0;
}