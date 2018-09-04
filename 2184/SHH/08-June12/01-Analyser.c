#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gcc -Wall 01-Analyser.c analyserFuncs.c utilities.c -o analyser 

#include "utilities.h"
void title(void);
#define MinMark 0
#define MaxMark 100


// 0 100
int main(void) {
  int counter;
  int noOfMarks;
  int marks[100];
  int stNo[100];
  int passed;
  int failed;
  int justPassed;
  double sum;
  title();
  printf("Please enter the number of marks for analysis: ");
  noOfMarks = getValidInt(3, 100);
  printf("Please enter %d marks for the assessment;\n", noOfMarks);
  sum = 0;
  passed = 0;
  justPassed = failed = 0;
  for (counter = 0; counter < noOfMarks; counter++) {
    printf("%d: studnetNo: ", counter + 1);
    stNo[counter] = getValidInt(100, 999999999);
    printf("%d: Mark: ", counter + 1);
    marks[counter] = getValidInt(MinMark, MaxMark);
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
  printf("Row |   St No   | Mark | Passed\n");
  line(31, '=');
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
  line(31,'-');
  printf("Total of %d student%s passed the"
          " assessment, while %d of them failed.\n",
    passed + justPassed, (passed + justPassed) > 1 ? "s" : "", failed);
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

