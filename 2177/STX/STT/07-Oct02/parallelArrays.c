#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MaxNoOfStudents 2500
int main(void) {
  // no of samples
  int noOfStudents;
  // the data
  int studentNo[MaxNoOfStudents];
  int studentNoOfSubjects[MaxNoOfStudents];
  float studentGpa[MaxNoOfStudents];

  // stat calculation variables
  float totalGpa = 0.0;
  float totalSubjectMark = 0.0;
  int noOfSubjects = 0;

  // loop index 
  int index;

  // program title
  printf("--------=========== Seneca GPA Analyzer ============----------\n");

  // determine the number of samples
  printf("Please enter the number of students in this set: ");
  scanf("%d", &noOfStudents);

  // data entry 
  for (index = 0; index < noOfStudents; index++) {
    printf("Student row number %d:\n", index + 1);
    printf("Please enter the student number: ");
    scanf("%d", &studentNo[index]);
    printf("Please enter the number of subjects taken by student (%d): ", studentNo[index]);
    scanf("%d", &studentNoOfSubjects[index]);
    printf("Please enter the GPA for student (%d): ", studentNo[index]);
    scanf("%f", &studentGpa[index]);
  }
  // report
  printf("List of students and their GPA:\n");
  printf("Row | Student No | Subjects Taken | GPA\n"
         "--- | ---------- | -------------- | ---\n");
  for (index = 0; index < noOfStudents; index++) {
    printf("%3d | %10d | %14d | %3.1f\n"
           , index + 1, studentNo[index], studentNoOfSubjects[index], studentGpa[index]);

    // stat calculations
    totalGpa += studentGpa[index];
    totalSubjectMark += (studentNoOfSubjects[index] * studentGpa[index]);
    noOfSubjects += studentNoOfSubjects[index];
  }

  // stat results
  printf("--------------------------------- | ---\n"
    "                 Class average gpa: %3.1f\n"
    "              Average Subject mark: %3d\n"
    , totalGpa / noOfStudents, (int)((totalSubjectMark / noOfSubjects) * 100 / 4.0));

  return 0;
}
