#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct StudentMarks {
  int stno;
  double ipcMark;
  double uliMark;
  double eacMark;
};


void readStudentMarks(struct StudentMarks* st);
void printStudentMarks(const struct StudentMarks* st);
void printStudentsMarks(const struct StudentMarks* st, int size);


void readDouble(const char* prompt, double* dp);
void printDouble(const char* label, const double* dp, int precision);
void readInt(const char* prompt, int* dp);
void printInt(const char* label, const int* dp);
int main(void) {
  struct StudentMarks ST;
  struct StudentMarks S[10];
  double d;
  readStudentMarks(&ST);
  printStudentMarks(&ST);
  readDouble("GPA: ", &d);
  printDouble("Entered GPA", &d, 1);
  return 0;
}
void printDouble(const char* label, const double* dp, int precision) {
  printf("%s: %.*lf\n", label, precision, *dp);
}
void readDouble(const char* prompt, double* dp) {
  printf(prompt);
  scanf("%lf", dp);
}
void printInt(const char* label, const int* dp) {
  printf("%s: %d\n", label, *dp);
}
void readInt(const char* prompt, int* dp) {
  printf(prompt);
  scanf("%d", dp);
}


void readStudentMarks(struct StudentMarks* st) {
  printf("Enter following studnet information:\n");
  printf("Student number: ");
  scanf("%d", &st->stno);
  printf("IPC144: ");
  scanf("%lf", &st->ipcMark);
  printf("ULI101: ");
  scanf("%lf", &st->uliMark);
  printf("EAC150: ");
  scanf("%lf", &st->eacMark);
}
void printStudentMarks(const struct StudentMarks* st) {
  printf("Student number: %d\n", st->stno);
  printf("IPC144: %.1lf\n", (*st).ipcMark);
  printf("ULI101: %.1lf\n", (*st).uliMark);
  printf("EAC150: %.1lf\n", (*st).eacMark);
}
void printStudentsMarks(const struct StudentMarks* st, int size) {
  int i;
  for (i = 0; i < size; i++) {
    printStudentMarks(&st[i]);
  }
}
//void readStudentsMarks(struct StudentMarks st[], int size) {   // potatos
void readStudentsMarks(struct StudentMarks* st, int size) {      // potaaatos
    int i;
  for (i = 0; i < size; i++) {
    printf("%d---->\n", i + 1);
    readStudentMarks(&st[i]);
  }
}
