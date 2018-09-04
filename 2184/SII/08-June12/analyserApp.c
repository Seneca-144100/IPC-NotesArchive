#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// gcc -Wall analyser.c analyserApp.c utilities.c -o analyser<ENTER>
#include "utilities.h"
#include "analyser.h"



int main(void) {
  int cnt;
  int noOfMarks;
  struct StdMark st[100] ;
  struct StdMark std ;
  struct PassingRate rate = { 0, 0, 0 };

  double sum;
  int i;
  title();
  line(45, '*');
  printf("Please enter the number of marks for analysis: ");
  noOfMarks = getValidInt(3, 100);
  printf("Please enter %d marks for the assessment;\n", noOfMarks);
  sum = 0;
  for (cnt = 0; cnt < noOfMarks; cnt++) {
    printf("%d:\n", cnt + 1);
    st[cnt] = getStudentInfo();
    sum += st[cnt].mark;
    rate = updatePassingRates(rate, st[cnt].mark);
  }
  // PrintReport(????)
  printf("Row |   Name                         |   St No   | Mark | Passed\n");
  line(63,'=');
  for (cnt = 0; cnt < noOfMarks; cnt++) {
    PrnStudenRecordRow(cnt + 1, st[cnt]);
  }
  line(63,'=');

  PrnStatsResults(rate, sum / noOfMarks);
  return 0;
}

