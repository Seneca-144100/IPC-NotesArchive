#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct StdMark {
  int mark;
  int StNo;
  char name[41];
};

int main(void) {
  struct StdMark S;
  S.mark = 45;
  S.StNo = 123123123;
  strcpy(S.name, "Fardad");
  S.name[0] = 'S';
  return 0;
}