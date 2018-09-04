#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
struct StdMark {
  int mark;
  int StNo;
  char name[41];
};
void SetStMark(struct StdMark* ptr);



void SetStMark(struct StdMark* ptr) {
  char newline;
  printf("Please enter the following student information: \n");
  printf("Mark: ");
  (*ptr).mark = getValidInt(0, 100);
  printf("Student Number: ");
  ptr->StNo = getValidInt(100000000, 999999999);
  printf("Name: ")
    ;  scanf("%40[^\n]%c", ptr->name, &newline);
  if (newline != '\n') flushKeyboard();
}
void badPrnStMark(struct StdMark S) {  // 52 bytes are passed to the funciton (size of StdMark structure)
  printf("Student Information:\n");
  printf("mark: %d\n", S.mark);
  printf("Std No: %d\n", S.StNo);
  printf("Name: %s\n", S.name);
  printf("===========================\n");
}
void prnStMark(const struct StdMark* ptr) { // only 4 bytes are passed to the function.
  printf("Student Information:\n");
  //ptr->mark = 0;
  printf("mark: %d\n", ptr->mark);
  printf("Std No: %d\n", ptr->StNo);
  printf("Name: %s\n", ptr->name);
  printf("===========================\n");
}




int main(void) {
  struct StdMark S;
  SetStMark(&S);
  printf("the student information you entered are: \n");
  prnStMark(&S);
  return 0;
}