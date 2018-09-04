#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "utilities.h"

#include "analyser.h"

// 0 100
int main(void) {
  int counter;
  int noOfMarks;
  struct StdMark st[100];
  struct PassingRate rate = {0,0,0};
  double sum;
  title();
  printf("Please enter the number of marks for analysis: ");
  noOfMarks = getValidInt(3, 100);
  printf("Please enter %d marks for the assessment;\n"
    "Entery format is as follows: 999999999 999<ENTER>\n", noOfMarks);
  sum = 0;

  for (counter = 0; counter < noOfMarks; counter++) {
    printf("Entry number: %d\n", counter + 1);
    st[counter] = getStudentMark();
    sum += st[counter].mark;
    rate = updatePassingRates(rate, st[counter].mark);
  }
  reportTitle();
  line(31, '=');
  for (counter = 0; counter < noOfMarks; counter++) {
    PrnStdReportRow(counter + 1, st[counter]);
  }
  line(31,'-');
  printf("Total of %d student%s passed the"
          " assessment, while %d of them failed.\n",
    rate.passed + rate.justPassed, (rate.passed + rate.justPassed) > 1 ? "s" : "", rate.failed);
  printf("%d student(s) where \"borderline\" passes\n", rate.justPassed);
  printf("The average mark in class is %.1lf, which is a ", sum / noOfMarks);
  if (sum / noOfMarks > 49.99) {
    printf("pass\n");
  }
  else {
    printf("fail\n");
  }
  return 0;
}

