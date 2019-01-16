#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct StudentMark {
  double mark;
  int stno;
};

int main(void) {
  struct StudentMark st1;
  struct StudentMark st2 = { 99.2, 345678 };
  struct StudentMark S[3] = { { 20.4, 12345 },{ 76.3, 345678 } ,{ 99.2, 567890 } };
  int i;
  printf("Please enter student number: ");
  scanf("%d", &st1.stno);
  printf("Please enter the mark of the student: ");
  scanf("%lf", &st1.mark);
  printf("Stno: %d mark %.1lf\n", st1.stno, st1.mark);
  for (i = 0; i < 3; i++) {
    printf("Stno: %d mark %.1lf\n", S[i].stno, S[i].mark);
  }
  return 0;
}