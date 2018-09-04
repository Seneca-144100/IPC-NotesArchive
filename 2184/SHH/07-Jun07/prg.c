#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MINVALS 5
#define MAXVALS 100

void drawLine(int len, char ch);
void flushKeyboard(void);
int getint(void);



int main(void) {
  int value;
  int num;
  int i;
  int maxValue;
  printf("Please enter the number of the values: ");
  num = getint();
  while (num < MINVALS || num > MAXVALS) {
    printf("At least %d numbers and the maximum of %d numbers are acceptable, try again: ", MINVALS, MAXVALS);
    num = getint();
  }
  printf("Please enter the numbers:\n");
  for (i = 0; i < num; i++) {
    printf("%d: ", i + 1);
    value = getint();
    if (i == 0) {
      maxValue = value;
    }
    else {
      if (maxValue < value) {
        maxValue = value;
      }
    }
  }
  printf("The largest number in the values entered is: %d\n", maxValue);
  return 0;
}