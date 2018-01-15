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
  printf("Name: %s\n", S.name);
  printf("Stno: %d\n", S.stNo);
  printf("GPA: %.1lf\n", S.GPA);
}

int main(void) {
  FILE* stfile = fopen("stdata.txt", "r");
  int done = 0;
  struct Student S;
  while (!done) {
    if (fscanf(stfile, "%[^,],%d,%lf\n", S.name, &S.stNo, &S.GPA) == 3) {
      prnStudent(S);
      printf("-----------------\n");
    }
    else {
      done = 1;
    }
  }
  fclose(stfile);
  return 0;
}