#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void) {
  char junk = 'j';
  while (junk != '\n') {
     junk = getchar();
  }
}
void pause(void) {
   printf("Please press <ENTER> to contiue...");
   flushKeyboard();
}
int getInt(void) {
  int theValue;
  char hnl = 'x'; // Hopefuly New Line
  scanf("%d%c", &theValue, &hnl);
  while (hnl != '\n') {
    flushKeyboard();
    printf("Bad integer, retry: ");
    scanf("%d%c", &theValue, &hnl);
  }
  return theValue;
}

int getLimitedInt(int min, int max) {
  int theValue = getInt();
  while (theValue<min || theValue > max) {
    printf("Out of range value, retry (%d<= value <=%d): ", min, max);
    theValue = getInt();
  }
  return theValue;
}

double getDouble(void) {
  double theValue;
  char hnl = 'x'; // Hopefuly New Line
  scanf("%lf%c", &theValue, &hnl);
  while (hnl != '\n') {
    flushKeyboard();
    printf("Bad double, retry: ");
    scanf("%lf%c", &theValue, &hnl);
  }
  return theValue;
}
double getLimitedDouble(double min, double max) {
  double value = getDouble();
  while (value < min || value > max) {
    printf("Out of range, retry (%.3lf<= value <= %.3lf): ", min, max);
    value = getDouble();
  }
  return value;
}


void getStr(char *str, int maxlen) {
  fgets(str, maxlen, stdin);
  flushKeyboard();
  /* without using fgets:
  char buf[1024];
  int i;
  if (len > 1023) len = 1023;
  scanf("%1023[^\n]", buf);
  buf[len] = 0;
  flushKeyboard();
  for (i = 0; buf[i]; i++) {
     str[i] = buf[i];
  }
  str[i] = 0;
  */
}