#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void);
double getdouble(void);

int getMark(void);
double getDblMark(void);


int main(void) {
  int stNo[100];
  double ipcMark[100];
  double uliMark[100];
  double eacMark[100];
  int num;
  int i;
  int done = 0;
  int found = 0;
  int stnoEntry;
  printf("Please enter the number of students: ");
  num = getInt();
  printf("pleaes enter the students' marks: \n");
  for (i = 0; i < num; i++) {
    printf("Data entry row %d:\n", i + 1);
    printf("Student number: ");
    stNo[i] = getInt();
    printf("ipc: ");
    ipcMark[i] = getDblMark();
    printf("uli: ");
    uliMark[i] = getDblMark();
    printf("eac: ");
    eacMark[i] = getDblMark();
  }

  // done with data entry, let do search
  while (!done) {
    printf("Please enter the student number:");
    stnoEntry = getInt();
    found = 0;
    for (i = 0; i < num; i++) {
      if (stnoEntry == stNo[i]) {
        printf("Student marks: ipc: %.2lf, uli: %.2lf, eac: %.2lf\n", ipcMark[i], uliMark[i], eacMark[i]);
        found = 1;
      }
    }
    if (!found) {
      printf("Not found!\n");
    }
    printf("Done searching? 1/0: ");
    done = getInt();
  }
  printf("Good bye!\n");
}