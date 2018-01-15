#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MaxNoOfStudents 2500
int readInt(void);
void flushKeyboard(void);

int main(void) {
  int num1;
  int num2;
  printf("Enter num1: ");
  num1 = readInt();
  printf("Enter num2: ");
  num2 = readInt();
  printf("%d   %d\n", num1, num2);
  return 0;
}

int readInt(void) {
  int value;
  char newline;
  do {
    scanf("%d%c", &value, &newline);
    if (newline != '\n') {
      printf("Invalid Entry, Try Again: ");
      flushKeyboard();
    }
   
  } while (newline != '\n');
  return value;
}

void flushKeyboard(void) {
  char newline;
  do {
    scanf("%c", &newline);
  } while (newline != '\n');
}
