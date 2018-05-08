#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int noOfStudents;
  int loopIndex;
  int currentMark;
  int totalMark = 0; // set to zero to start the total value
  double MarksAverage;
  // display program title
  printf("Seneca Mark Stats\n");
  // getting the number of the students
  printf("Please enter the number of the students in class: ");
  scanf("%d", &noOfStudents);
  // getting the students' marks
  loopIndex = 0;
  printf("Please enter the %d marks for the assessment:\n", noOfStudents);
  while (loopIndex < noOfStudents) {
    printf("%d: ", loopIndex+ 1); // display entry row number
    scanf("%d", &currentMark);
    totalMark += currentMark;
    loopIndex++;
  }
  MarksAverage = (double)totalMark / noOfStudents;
  printf("The average of the class for this assessment is: %.2lf\n", MarksAverage);
  return 0;
}