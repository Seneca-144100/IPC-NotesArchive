#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void flushKeyboard(void) {
  char newline;// so the loop can start
  do {
    scanf("%c", &newline);
  } while (newline != '\n');
}



int yes(void) {
  char ch;
  char newline = 'x';
  scanf("%c%c", &ch, &newline);
  while ((ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N') || newline != '\n' ) {
    if (newline != '\n') {
      flushKeyboard();
    }
    printf("Only (y) or (n) is acceptable, redo: ");
    scanf("%c%c", &ch, &newline);
  }
  return (ch == 'y' || ch == 'Y');
}



int getInt(void) {
  int value;
  char newline = 'x';
  scanf("%d%c", &value, &newline);
  while (newline != '\n') {
    flushKeyboard();
    printf("Invalid integer try again: ");
    scanf("%d%c", &value, &newline);
  }
  return value;
}







int getLimitedInt(int min, int max) {
  int value;
  value = getInt();
  while (value < min || value > max) {
    printf("Invalid value, %d<=value<=%d, redo: ", min, max);
    value = getInt();
  }
  return value;
}

int getMark(void) {
  return getLimitedInt(0, 100);
}
double getDouble(void) {
  double value;
  char newline = 'x';
  scanf("%lf%c", &value, &newline);
  while (newline != '\n') {
    flushKeyboard();
    printf("Invalid double try again: ");
    scanf("%lf%c", &value, &newline);
  }
  return value;
}
double getDblMark(void) {
  double value;
  value = getDouble();
  while (value < 0 || value > 100) {
    printf("Invalid mark try again: ");
    value = getDouble();
  }
  return value;
}