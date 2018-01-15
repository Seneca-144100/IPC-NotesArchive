#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int mark;
  int highestMark = 0;
  const int noOfStudents = 4;
  int cnt;
  printf("Please enter %d student marks:\n", noOfStudents);
  for(cnt = 0 ; cnt < noOfStudents ; cnt++){
    printf("%d> ", cnt + 1);
    scanf("%d", &mark);
    if (mark > highestMark) {
      highestMark = mark;
    }
  }
  printf("The highest mark is: %d\n", highestMark);
  return 0;
}