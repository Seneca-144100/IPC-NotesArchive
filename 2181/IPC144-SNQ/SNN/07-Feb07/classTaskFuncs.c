#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getInt(void);
int getMark(void);
void programTitle(void) {
  // program title
  printf("Class marks stats program.\n");
}

int getNumberOfStudents(void) {
  int num;
  // getting the number of students
  printf("What is the number of the students in class? ");
  num = getInt();
  return num;
}

int getStudentMark(void) {
  int mark;
  mark = getMark();

  return mark;
}