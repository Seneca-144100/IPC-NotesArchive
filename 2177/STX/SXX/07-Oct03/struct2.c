#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MaxNoOfStudents 1000
struct StudentData {
  int num;
  int numOfSubjects;
  float gpa;
};


int main(void) {
  // declare variables
  // no of records
  int noOfStudents;
  // the data


  /*int studentNo[MaxNoOfStudents];
  int studentNoOfSubjects[MaxNoOfStudents];
  float studentGpa[MaxNoOfStudents];*/

  struct StudentData stRec[MaxNoOfStudents];

  // loop index 
  int index;
  // stat calculation variables
  float totalGpa = 0.0;
  int noOfSubjects = 0;
  float totalSubjectMark = 0.0;

  // program title
  printf("--------=========== Seneca GPA Analyzer ============----------\n");
  // determine the number of records
  printf("Please enter the number of students in this set: ");
  scanf("%d", &noOfStudents);
  // data entry
  for (index = 0; index < noOfStudents; index++) {
    printf("Data entry for student in row number %d:\n", index + 1);
    printf("Please enter the student number: ");
    scanf("%d", &stRec[index].num);
    printf("Please enter the number of subjects taken by student (%d): "
      , stRec[index].num);
    scanf("%d", &stRec[index].numOfSubjects);
    printf("Please enter the GPA for student (%d): ", stRec[index].num);
    scanf("%f", &stRec[index].gpa);
  }


  // stats and logic on data
  for (index = 0; index < noOfStudents; index++) {
    totalGpa += stRec[index].gpa;
    totalSubjectMark += (stRec[index].numOfSubjects * stRec[index].gpa);
    noOfSubjects += stRec[index].numOfSubjects;
  }
  
  // print a report
  printf("List of students, their number of subjects and their GPA:\n");
  printf("Row | Student num | Subjects Taken | GPA\n"
    "--- | ---------- | -------------- | ---\n");
  for (index = 0; index < noOfStudents; index++) {
    printf("%3d | %10d | %14d | %3.1f\n"
      , index + 1, stRec[index].num, stRec[index].numOfSubjects, stRec[index].gpa);
  }
  printf("--------------------------------- | ---\n"
    "                 Total average gpa: %3.1f\n"
    "              Average Subject mark: %3d\n"
    , totalGpa / noOfStudents, (int)((totalSubjectMark / noOfSubjects) * 100 / 4.0));
  return 0;
}