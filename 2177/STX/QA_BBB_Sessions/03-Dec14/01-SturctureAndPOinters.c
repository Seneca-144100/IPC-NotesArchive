#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  int stNo;
  char name[41];
  double GPA;
};

void getStudent(struct Student* sp){
  printf("Name: ");
  scanf("%s", (*sp).name);
  printf("Stno: ");
  scanf("%d", &sp->stNo);
  printf("GPA: ");
  scanf("%lf", &sp->GPA);
}

void prnStudent(struct Student S) {
  printf("Name: %s", S.name);
  printf("Stno: %d", S.stNo);
  printf("GPA: %lf", S.GPA);
}

int main(void) {
  int a;
  int* p = &a;

  *p = 10;
  // a becomes 10

  struct Student st;
  getStudent(&st);
  prnStudent(st);
  return 0;
}