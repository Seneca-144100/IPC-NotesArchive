#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int counter;
  int noOfMarks;
  int marks[100];
  int stNo[100];
  int passed;
  int failed;
  int justPassed;
  double sum;
  printf("Welcome to the Assessment Analyzer program\n\n");
  printf("Please enter the number of marks for analysis: ");
  scanf("%d", &noOfMarks);
  printf("Please enter %d marks for the assessment;\n"
    "Entery format is as follows: 999999999 999<ENTER>\n", noOfMarks);
  sum = 0;
  passed = 0;
  justPassed = failed = 0;
  for (counter = 0; counter < noOfMarks; counter++) {
    printf("%d: [studnetNo mark]\n", counter + 1);
    scanf("%d %d", &stNo[counter], &marks[counter]);
    sum += marks[counter];
    if (marks[counter] == 50) {
      justPassed++;
    }
    else if (marks[counter] > 50) {
      passed++;
    }
    else {
      failed++;
    }
  }
  printf("Row |   St No   | Mark | Passed\n===============================\n");
  for (counter = 0; counter < noOfMarks; counter++) {
    printf("%3d | %09d |  %3d | ", counter + 1, stNo[counter], marks[counter]);
    if (marks[counter] == 50) {
      printf("Barely\n");
    }
    else if (marks[counter] > 50) {
      printf("Yes\n");
    }
    else {
      printf("No\n");
    }
  }
  printf("==============================\n");
  printf("Total of %d student%s passed the assessment"
    ", while %d of them failed.\n", passed + justPassed,(passed + justPassed > 1)?"s":"",  failed);
  printf("%d student(s) where \"borderline\" passes\n", justPassed);
  printf("The average mark in class is %.1lf, which is a ", sum / noOfMarks);
  if (sum / noOfMarks > 49.99) {
    printf("pass\n");
  }
  else {
    printf("fail\n");
  }
  return 0;
}