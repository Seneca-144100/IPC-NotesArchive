#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
struct StdMark {
  int mark;
  int StNo;
  char name[41];
};

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
  std.mark = getValidInt(0, 100);
  return std;
}
