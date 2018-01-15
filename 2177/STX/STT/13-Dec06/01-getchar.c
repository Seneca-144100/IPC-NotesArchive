#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int ch;
  ch = getchar();
  while (getchar() != '\n'); // flush keyboard
  printf(">%c< >%d<\n", ch, ch);
  return 0;
}