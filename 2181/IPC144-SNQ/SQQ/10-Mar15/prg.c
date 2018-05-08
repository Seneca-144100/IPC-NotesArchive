#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct StudentMarks {
  int stno;
  double ipcMark;
  double uliMark;
  double eacMark;
};

void readStudentMarks(struct StudentMarks* st);

void readDouble(const char* prompt, double* dp);
void printDouble(const char* label, const double* dp, int precision);

int main(void) {
  double d;
  readDouble("GPA: ", &d);
  printDouble("Entered GPA", &d, 1);
  return 0;
}

void readStudentMarks(struct StudentMarks* st) {
  pritnf("Student No: ");
  scanf("%d", &st->stno);
  pritnf("IPC144: ");
  scanf("%lf", &(*st).ipcMark);
  pritnf("uli101: ");
  scanf("%lf", &(*st).uliMark);
  pritnf("EAC150: ");
  scanf("%lf", &(*st).eacMark);
}
void printStudentMarks(const struct StudentMarks* st) {
  printf("Student number: %d\n", st->stno);
  printf("IPC144: %.1lf\n", (*st).ipcMark);
  printf("ULI101: %.1lf\n", (*st).uliMark);
  printf("EAC150: %.1lf\n", (*st).eacMark);
}
void readDouble(const char* prompt, double* dp) {
  printf(prompt);
  scanf("%lf", dp);
}

void printDouble(const char* label,const double* dp, int precision) {
  printf("%s: %.*lf\n",label,precision,   *dp);
}