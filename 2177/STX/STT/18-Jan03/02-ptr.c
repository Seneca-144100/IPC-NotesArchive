#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Student {
  char name[41];
  double gpa;
};

void setGpa(struct Student* StPtr, double theGpa) {
  StPtr->gpa = theGpa;
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
  double a;
  char myname[41];
  double mygpa;
  sp = &S;
  strcpy(S.name, "Fred Soley");
  S.gpa = 3.9;

  strcpy(sp->name, "Fred Soley");
  sp->gpa = 3.9;

  scanf("%s", sp->name);
  scanf("%s", S.name);
  scanf("%s", myname);

  scanf("%lf", &sp->gpa);
  scanf("%lf", &S.gpa);
  scanf("%lf", &mygpa);


  setGpa(&S, 3.9);
  setGpa(sp, 3.9);
  printStudent(&S);
  printStudent(sp);
  return 0;
}