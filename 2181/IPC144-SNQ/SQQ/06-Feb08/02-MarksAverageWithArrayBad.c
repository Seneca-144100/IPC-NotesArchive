#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_OF_STUDENTS 160
int main(void) {
  int noOfStudents;
  int loopIndex;
  int Marks[MAX_NO_OF_STUDENTS];
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
    printf("%d: ", loopIndex + 1); // display entry row number
    scanf("%d", &Marks[loopIndex]);
    totalMark += Marks[loopIndex];
    loopIndex++;
  }
  MarksAverage = (double)totalMark / noOfStudents;
  // REPORT
  loopIndex = 0;
  printf("Student marks:\n");
  while (loopIndex < noOfStudents) {
    printf("%d:...... %d\n", loopIndex + 1, Marks[loopIndex]); // display entry row number
    loopIndex++;
  }
  printf("Average: %.2lf\n", MarksAverage);
  return 0;
}