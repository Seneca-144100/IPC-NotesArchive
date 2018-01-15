#define _CRT_NO_SEQURE_WARNINGS
#include <stdio.h>
struct Student {
  int stNo;
  char name[41];
  double GPA;
};


int GpaSearch(int stNo, struct Student db[], int dbSize, double* gpaptr) {
  int i;
  int found = 0;
  for (i = 0; !found && i < 2000; i++) {
    if (db[i].stNo == stNo) {
      found == 1;
      *gpaptr = db[i].GPA;
    }
  }
  return found;
}

int main(void) {
  struct Student database[2000];
  double gpa;
  int stNo = 12345;
  if (GpaSearch(stNo, database, 2000, &gpa)) {
    printf("The gpa is %lf\n", gpa);
  }
  else {
    printf("Student not found!\n");
  }
  return 0;
}