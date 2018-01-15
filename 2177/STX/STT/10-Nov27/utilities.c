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
int getLimitedInt(int min, int max) {
  int value;
  do {
    value = getInt();
    if (value < min || value > max) {
      printf("Invalid value, %d <= value <= %d, re-enter: ", min, max);
    }
  } while (value < min || value > max);
  return value;
}
double getLimitedDouble(double min, double max) {
  double value;
  do {
    value = getDouble();
    if (value < min || value > max) {
      printf("Invalid value, %.2lf <= value <= %.2lf, re-enter: ", min, max);
    }
  } while (value < min || value > max);
  return value;
}

int yes(void) {
  char ch;
  char newline = 0;
  int res = 0;
  do {
    scanf("%c%c", &ch, &newline);
    if (!(ch == 'y' || ch == 'n') || newline != '\n') {
      printf("Only y or n are acceptable, re-enter: ");
      flushKeyboard();
    }
  } while (!(ch == 'y' || ch == 'n') ||  newline != '\n');
  if (ch == 'y') {
    res = 1;
  }

  return res;


  //return (ch == 'y'); nice way to do;
}

/*
123.45<ENTER>
garbage<ENTER>
*/