#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"



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


int getLimitedInt(int minValid, int maxValid) {
  int ivalue = getInt();
  while (ivalue<minValid || ivalue > maxValid) {
    printf("Out of range value, (%d<=value<=%d): ", minValid, maxValid);
    ivalue = getInt();
  }
  return ivalue;
}


int getInt(void) {
  int ivalue;
  char next = 'G';
  //get a double from keyboard and return it to the caller program
  scanf("%d%c", &ivalue, &next);
  while (next != '\n') {
    flushKeyboard();
    printf("Invalid integer value, try again: ");
    scanf("%d%c", &ivalue, &next);
  }
  return ivalue;
}


double getLimitedDouble(double minValid, double maxValid) {
  double dvalue = getDouble();
  while (dvalue<minValid || dvalue > maxValid) {
    printf("Out of range value, (%lf<=value<=%lf): ", minValid, maxValid);
    dvalue = getDouble();
  }
  return dvalue;
}

void flushKeyboard(void) {
  char junk;
  do {
     junk = getchar();
  } while (junk != '\n');
}