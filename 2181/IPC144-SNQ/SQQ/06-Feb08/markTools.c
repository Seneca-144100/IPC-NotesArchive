#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void flushKeyboard(void) {
  char newline = 'x';
  while (newline != '\n') {
    scanf("%c", &newline);
  }
}
int getInt(void) {
  int value;
  char newline = 'x';
  scanf("%d%c", &value, &newline);
  while (newline != '\n') {
    // user is an idiot, flush keybaord
    flushKeyboard();
    printf("Invalid integer, try again: ");
    scanf("%d%c", &value, &newline);
  }

  return value;
}

void programTitle(void) {
  // display program title
  printf("Seneca Mark Stats\n");
}

int getNoOfStudents(void) {
  int value;
  // getting the number of the students
  printf("Please enter the number of the students in class: ");
  value = getInt();

  return value;
}

int getMark(void) {
  int value;
  value = getInt();
  while (value < 0 || value > 100) {
    printf("Invalid mark, try again: ");
    value = getInt();
  }
  return value;
}