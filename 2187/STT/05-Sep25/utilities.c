#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void flushKeyboard(void) {
  char junk = 'j';
  while (junk != '\n') {
    scanf("%c", &junk);
  }
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