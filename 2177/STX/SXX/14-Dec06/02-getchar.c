#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"

int main(void) {
  char ch;
  printf("> ");
  ch = getchar();
  printf(">%c< >%d<\n", ch, ch);
  return 0;
}