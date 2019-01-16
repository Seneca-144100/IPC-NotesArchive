#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void) {
  char junk;
  // abd allkdfj;alskdjf <ENTER>
  do {
    scanf("%c", &junk);
  } while (junk != '\n');
}


double getDouble(void) {
  double dvalue;
  char next = 'G';
  //get a double from keyboard and return it to the caller program
  scanf("%lf%c", &dvalue, &next);
  while (next != '\n') {
    flushKeyboard();
    printf("Invalid double value, try again: ");
    scanf("%lf%c", &dvalue, &next);
  }
  return dvalue;
}


int getInt(void) {
  int ivalue;
  char next = 'G';
  //get a double from keyboard and return it to the caller program
  scanf("%d%c", &ivalue, &next);
  while (next != '\n') {
    flushKeyboard();
    printf("Invalid double value, try again: ");
    scanf("%d%c", &ivalue, &next);
  }
  return ivalue;
}

