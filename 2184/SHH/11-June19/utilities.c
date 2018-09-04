#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// gcc analyserFuncs.c prg.c utilities.c -0 myprg<ENTER>

void flushKeyboard(void);
int getInt(void) {
  int num;
  char newline = 'x';
  scanf("%d%c", &num, &newline);
  while (newline != '\n') {
    printf("Invalid integer, try again: ");
    flushKeyboard();
    scanf("%d%c", &num, &newline);
  }
  return num;
}
double getDouble(void) {
  double num;
  char newline = 'x';
  scanf("%lf%c", &num, &newline);
  while (newline != '\n') {
    printf("Invalid double, try again: ");
    flushKeyboard();
    scanf("%lf%c", &num, &newline);
  }
  return num;
}
void flushKeyboard(void) {
  char junk;
  do {
    scanf("%c", &junk);
  } while (junk != '\n');
}

void line(int len, char ch) {
  while (len) {
    printf("%c", ch);
    len--;
  }
  printf("\n");
}
int getValidInt(int min, int max) {
  int num = getInt();
  while (num < min || num > max) {
    printf("Invalid Value, try again (%d <= value <= %d): ", min, max);
    num = getInt();
  }
  return num;
}
double getValidDouble(double min, double max) {
  double num = getDouble();
  while (num < min || num > max) {
    printf("Invalid Value, try again (%.2lf <= value <= %.2lf): ", min, max);
    num = getDouble();
  }
  return num;
}