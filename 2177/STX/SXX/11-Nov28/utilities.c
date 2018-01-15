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
int yes(void) {
  char ch;
  char newline = 0;
  do {
    scanf("%c%c", &ch, &newline);
    if (!(ch == 'y' || ch == 'Y' || ch == 'N' || ch == 'n') || newline != '\n') {
      printf("only (Y)es or (N)o are acceptable, re-enter: ");
      if (newline != '\n') flushKeyboard();
    }
  } while (!(ch == 'y' || ch == 'Y' || ch == 'N' || ch == 'n') || newline != '\n');
  if (newline != '\n') flushKeyboard();
  return ch == 'y' || ch == 'Y';
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

int getLimitedInt(int min, int max) {
  int value;
  do {
    value = getInt();
    if (value < min || value > max) {
      printf("Invalid value; %d <= value <= %d: ", min, max);
    }
  } while (value < min || value > max);
  return value;
}
int getLimitedDouble(double min, double max) {
  double value;
  do {
    value = getDouble();
    if (value < min || value > max) {
      printf("Invalid value; %lf <= value <= %lf: ", min, max);
    }
  } while (value < min || value > max);
  return value;
}
int getSelection(int min, int max) {
  return getLimitedInt(min, max);
}
