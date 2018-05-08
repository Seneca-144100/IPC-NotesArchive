#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int stMark;
  int marksTotal;
  int noOfStudents;
  int loopIndex;
  // program title
  printf("Class marks stats program.\n");
  // getting the number of students
  printf("What is the number of the students in class? ");
  scanf("%d", &noOfStudents);
  // class mark entry
  printf("Please enter %d marks for students:\n", noOfStudents);
  loopIndex = 0;
  // setting the intital total to zero
  marksTotal = 0;
  while (loopIndex < noOfStudents) {
    printf("%d: ", loopIndex + 1);
    scanf("%d", &stMark);
    // adding to the total
    marksTotal += stMark;
    loopIndex++;
  }
  // calc the aver that is "marksTotal / noOfStudents" :
  printf("The average mark in class is: %d\n", marksTotal / noOfStudents);
  return 0;
}