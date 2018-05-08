#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int stMark[160];
  int marksTotal;
  int noOfStudents;
  int loopIndex;
  int failed = 0;
  int max;
  int min;
  double classAverage;
  // program title
  printf("Class marks stats program.\n");
  // getting the number of students
  printf("What is the number of the students in class? ");
  scanf("%d", &noOfStudents);
  // class mark entry
  printf("Please enter %d marks for students:\n", noOfStudents);
  loopIndex = 0;
  while (loopIndex < noOfStudents) {
    printf("%d: ", loopIndex + 1);
    scanf("%d", &stMark[loopIndex]);
    loopIndex++;
  }


  // stats caclulation
  // setting the intital total to zero
  marksTotal = 0;
  loopIndex = 0;
  min = max = stMark[0];
  while (loopIndex < noOfStudents) {
    marksTotal += stMark[loopIndex];
    if (max < stMark[loopIndex]) {
      max = stMark[loopIndex];
    }
    if (min > stMark[loopIndex]) {
      min = stMark[loopIndex];
    }
    loopIndex++;
  }

  classAverage = (double)marksTotal / noOfStudents;
  // report section
  // calc the aver that is "marksTotal / noOfStudents" :

  printf("class marks:\n");
  for (loopIndex = 0; loopIndex < noOfStudents; loopIndex++) {
    printf("%d: %d ", loopIndex + 1, stMark[loopIndex]);
    // fail report
    if (stMark[loopIndex] < 50) {
      printf(" Failed");
      failed++;
    }
    printf("\n");
  }
  printf("--------------------\n");
  printf("   %.2lf is the average\n", classAverage);
  printf("min mark is %d, and max mark is %d\n", min, max);
  if (failed != 0) {
    printf("out of %d students %d failed! :( \n", noOfStudents, failed);
  }
  else {
    printf("Everyone passed... yaaay!\n");
  }
  return 0;
}