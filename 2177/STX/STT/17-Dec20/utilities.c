
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKeyboard(void) {
  while (getchar() != '\n');
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

