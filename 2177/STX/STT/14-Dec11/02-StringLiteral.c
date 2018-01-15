#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int i;
  for (i = 0; i < 7; i++) {
    putchar("ABCDEFG"[i]);
  }
  putchar('\n');
  return 0;
}