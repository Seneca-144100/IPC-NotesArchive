#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKeyboard(void) {
  char newline = 0;
  while (newline != '\n') {
    scanf("%c", &newline);
  }
}

void pause(void) {
  printf("Press ENTER to continue!");
  flushKeyboard();
}
double getDouble(void) {
  double num;
  char newline = 0;
  do {
    scanf("%lf%c", &num, &newline);
    if (newline != '\n') {
      printf("Bad double value, re-enter: ");
      flushKeyboard();
    }
  } while (newline != '\n');
  return num;
}
int getInt(void) {
  int num;
  char newline = 0;
  do {
    scanf("%d%c", &num, &newline);
    if (newline != '\n') {
      printf("Bad Integer value, re-enter: ");
      flushKeyboard();
    }
  } while (newline != '\n');
  return num;
}

/*
123.45<ENTER>
garbage<ENTER>
*/