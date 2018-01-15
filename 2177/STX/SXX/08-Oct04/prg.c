#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// user entery:
/*
25<ENTER>
32<ENTER>

25\n32\n

"%d", &num

"%d", &var
*/
int readInt(void);
void flushKeyboard(void);

int main(void) {
  int num1;
  int num2;
  printf("Enter num1: ");
  num1 = readInt();
  printf("Enter num2: ");
  num2 = readInt();
  printf("%d    %d\n", num1, num2);
  return 0;
}


int readInt(void) {
  int value;
  char newline = 'x';
  do {
    scanf("%d%c", &value, &newline);
    if (newline != '\n') {
      printf("Invalid Entry, try again: ");
      flushKeyboard();
    }
  } while (newline != '\n');
  return value;
}

void flushKeyboard(void) {
  char junk;
  do {
    scanf("%c", &junk);
  } while (junk != '\n');
}