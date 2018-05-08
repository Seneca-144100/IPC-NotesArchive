#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void) {
  char newline ;// so the loop can start
  do {
    scanf("%c", &newline);
  } while (newline != '\n');
}
int getInt(void);
double getdouble(void);

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


double getDblMark(void) {
  double value;

  value = getdouble();
  while (value < 0.0 || value > 100.0) {
    printf("Invalid mark try again: ");
    value = getdouble();
  }
  return value;
}
double getdouble(void) {
  double value;
  char newline = 'x';
  scanf("%lf%c", &value, &newline);
  while (newline != '\n') {
    //user is an idiot, so flush the keyboard
    flushKeyboard();
    printf("Invalid integer try again: ");
    scanf("%lf%c", &value, &newline);
  }
  return value;
}