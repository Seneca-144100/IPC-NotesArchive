#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
struct Student {
  int stNo;
  char name[41];
  double GPA;
};

void getStudent(struct Student* sp){
  printf("Name: ");
  scanf("%[^\n]", (*sp).name);
  printf("Stno: ");
  sp->stNo = getLimitedInt(1000000, 9999999);
  printf("GPA: ");
  sp->GPA = getLimitedDouble(0.0, 4.0);
}

void prnStudent(struct Student S) {
  printf("Name: %s", S.name);
  printf("Stno: %d", S.stNo);
  printf("GPA: %lf", S.GPA);
}

int main(void) {
  FILE* stfile = fopen("stdata.txt", "w");
  int done = 0;
  struct Student S;
  while (!done) {
    printf("Enter St info: ");
    getStudent(&S);
    fprintf(stfile, "%s,%d,%.1lf\n", S.name, S.stNo, S.GPA);
//    printf("%s,%d,%.1lf\n", S.name, S.stNo, S.GPA); if you want to print it on the screen too!
    printf("Continue? (Y/N): ");
    if (!yes()) done = 1;
  }
  fclose(stfile);
  return 0;
}