#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXSTDNO 100
struct StudentMarks {
  int stno;
  double ipcMark;
  double uliMark;
  double eacMark;
};

void flushKeyboard(void);
int getInt(void);
int getMark(void);
double getDouble(void);
double getDblMark(void);

struct StudentMarks getStudentMarks(void) {
  struct StudentMarks marks;
  printf("Student number: ");
  marks.stno = getInt();
  printf("ipc: ");
  marks.ipcMark = getDblMark();
  printf("uli: ");
  marks.uliMark = getDblMark();
  printf("eac: ");
  marks.eacMark = getDblMark();
  return marks;
}

int main(void) {
  struct StudentMarks stmarks[MAXSTDNO];
  int num;
  int i;
  int done = 0;
  int stnoEntry;
  int found;
  printf("Please enter the number of students: ");
  num = getInt();
  printf("pleaes enter the marks: \n");
  for (i = 0; i < num; i++) {
    printf("%d:\n", i + 1);
    stmarks[i] = getStudentMarks();
  }
  // search and report

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
      printf("Not Found!\n");
    }
    printf("Done searching? (y)es or (n)o: ");
    done = yes();
  }

  return 0;
}