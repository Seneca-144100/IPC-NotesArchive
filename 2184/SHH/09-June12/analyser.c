#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
#include "analyser.h"
void title(void) {
  printf("Welcome to the Assessment Analyzer program\n\n");
}

struct StdMark getStudentMark(void) {
  struct StdMark std;
  printf("Name: ");
  scanf("%s", std.name);
  printf("Student number: ");
  std.StNo = getValidInt(10000000, 999999999);
  printf("Student Mark: ");
  std.mark = getValidInt(MinMark, MaxMark);
  return std;
}

struct PassingRate updatePassingRates(struct PassingRate pr,
                                         int mark) {
  if (mark == 50) {
    pr.justPassed++;
  }
  else if (mark > 50) {
    pr.passed++;
  }
  else {
    pr.failed++;
  }
  return pr;
}


void PrnStdReportRow(int row, struct StdMark st) {
  printf("%3d | %-41s | %09d |  %3d | ", row, st.name,
                                  st.StNo, st.mark);
  if (st.mark == 50) {
    printf("Barely\n");
  }
  else if (st.mark > 50) {
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
}
void reportTitle(void) {
  printf("Row |  Name                                     |   St No   | Mark | Passed\n");
}