
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_ST_NO 200
struct StudentMark {
  int stno;
  double mark;
};

int main(void) {
  struct StudentMark S;
  struct StudentMark Std[500];
  S.stno = 123;
  S.mark = 56.7;
  scanf("%d", &S.stno);
  scanf("%lf", &S.mark);

  return 0;
}


