#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Student {
  char name[41];
  double gpa;
};

void setGpa(struct Student* StPtr, double gpa) {
  StPtr->gpa = gpa;
}
//void printStudent(struct Student St) {  // this is expensive because lots of information must be passed and copied
//  printf("Name: %s\n, Gpa: %.1lf", St.name, St.gpa);
//}
void printStudent(const struct Student* StPtr) {  // this is much faster, because only "ONE" address is passed
  printf("Name: %s\n, Gpa: %.1lf", StPtr->name, StPtr->gpa);
}

int main(void) {
  struct Student S;
  struct Student* sp;
  char myname[41];
  double mygpa;
  sp = &S;
  S.gpa = 3.5;
  sp->gpa = 3.5;

  scanf("%s", S.name);
  scanf("%s", sp->name);
  scanf("%s", myname);

  scanf("%lf", &S.gpa);
  scanf("%lf", &sp->gpa);
  scanf("%lf", &mygpa);

  setGpa(&S, 3.9);
  setGpa(sp, 3.9);
  printStudent(S);


  printf("%d\n", a);
  return 0;
}