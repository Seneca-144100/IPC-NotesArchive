#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void drawLine(int len, char ch) {
  int i;
  for (i = 0; i < len; i++) {
    printf("%c", ch);
  }
  printf("\n");
}
void flushKeyboard(void) {
  char junk;
  do {
    scanf("%c", &junk);
  } while (junk != '\n');
}

int getint(void) {
  int num;
  char newline;
  scanf("%d%c", &num, &newline);
  while (newline != '\n') {
    //user is nuts
    printf("Invalid integer, please try again: ");
    flushKeyboard();
    scanf("%d%c", &num, &newline);
  }
  return num;
}