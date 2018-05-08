#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void);
double getdouble(void);

int getMark(void);
double getDblMark(void);

struct StudentMarks {
  int stno;
  double ipcMark;
  double uliMark;
  double eacMark;
};

struct StudentMarks getStMarks(void) {
  struct StudentMarks SM;

  printf("Student number: ");
//  SM.stno = getInt();
  scanf("%d", &SM.stno);
  printf("ipc: ");
  SM.ipcMark = getDblMark();
  printf("uli: ");
  SM.uliMark = getDblMark();
  printf("eac: ");
  SM.eacMark = getDblMark();

  return SM;
}

int main(void) {

  struct StudentMarks stmarks[100];

  //int stNo[100];
  //double ipcMark[100];
  //double uliMark[100];
  //double eacMark[100];


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
    stmarks[i] = getStMarks();
  }

  // done with data entry, let do search
  while (!done) {
    printf("Please enter the student number:");
    stnoEntry = getInt();
    found = 0;
    for (i = 0; i < num; i++) {
      if (stnoEntry == stmarks[i].stno) {
        printf("Student marks: ipc: %.2lf, uli: %.2lf, eac: %.2lf\n",
               stmarks[i].ipcMark, stmarks[i].uliMark, stmarks[i].eacMark);
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