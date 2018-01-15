#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void) {
  char newline = 0;
  while (newline != '\n') {
    scanf("%c", &newline);
  }
}
void pause(void) {
  printf("Press ENTER to continue...");
  flushKeyboard();
}
/*
12\n
10\n
abcd\n
100    \n
*/
int getInt(void) {
  int num;
  char newline = 0;
  do {
    scanf("%d%c", &num, &newline);
    if (newline != '\n') {
      printf("Bad integer, re-enter please: ");
      flushKeyboard();
    }
  } while (newline != '\n');  // entry is bad
  return num;
}
double getDouble(void) {
  double num;
  char newline = 0;
  do {
    scanf("%lf%c", &num, &newline);
    if (newline != '\n') {
      printf("Bad double, re-enter please: ");
      flushKeyboard();
    }
  } while (newline != '\n');  // entry is bad
  return num;
}


int getSelection(int min, int max) {
  int value;
  do {
    value = getInt();
    if (value < min || value > max) {
      printf("Invalid value; %d <= value <= %d: ", min, max);
    }
  } while (value < min || value > max);
  return value;
}
