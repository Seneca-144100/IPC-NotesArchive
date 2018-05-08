#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void) {
  char newline = 'x';
  while (newline != '\n') {
    scanf("%c", &newline);
  }
}
int getInt(void);
int getMark(void) {
  int value;

  value = getInt();
  while (value < 0 || value > 100) {
    printf("Invalid mark try again: ");
    value = getInt();
  }
  return value;
}
int getInt(void) {
  int value;
  char newline = 'x';
  scanf("%d%c", &value, &newline);
  while (newline != '\n') {
    //user is an idiot, so flush the keyboard
    flushKeyboard();
    printf("Invalid integer try again: ");
    scanf("%d%c", &value, &newline);
  }
  return value;
}