#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "analyser.h"
void title(void) {
  printf("Welcome to the Assessment Analyzer program\n");
}

struct PassingRate updatePassingRates(struct PassingRate pr, int mark) {
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

struct StdMark getStudentInfo(void) {
  struct StdMark st;
  printf("Student Name: ");
  scanf("%s", st.name);
  printf("Student number: ");
  st.stNo = getValidInt(10000000, 999999999);
  printf("Mark: ");
  st.mark = getValidInt(0, 100);
  return st;
}

void PrnStudenRecordRow(int row, struct StdMark st ) {
  printf("%3d | %-30s | %09d |  %3d | ", row, st.name, st.stNo, st.mark);
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

void PrnStatsResults( struct PassingRate rate, double avr) {
  printf("Total of %d student%s passed the assessment"
    ", while %d of them failed.\n", rate.passed + rate.justPassed, (rate.passed + rate.justPassed > 1) ? "s" : "", rate.failed);
  printf("%d student(s) where \"borderline\" passes\n", rate.justPassed);
  printf("The average mark in class is %.1lf, which is a ", avr);
  if (avr > 49.99) {
    printf("pass\n");
  }
  else {
    printf("fail\n");
  }
}