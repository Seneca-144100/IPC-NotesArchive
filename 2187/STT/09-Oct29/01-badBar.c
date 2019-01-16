#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bar(char fill, int length);

int main(void) {
  int i;
  bar('=', 14);
  bar('-', 70);
  for (i = 1; i < 20; i++) {
    bar('+', i * 2);
  }
  return 0;
}

void bar(char ch, int len) {
  int i;
  for (i = 0; i < len; i++) {
    putchar(ch);  // printf("%c", ch);
  }
  putchar('\n'); // printf("\n");
}