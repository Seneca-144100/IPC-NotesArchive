#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int mark[4] = {20, 30, 40};// this is to demo initializtion and is not needed
  int highestMark = 0;
  const int noOfStudents = 4;
  int cnt;
  printf("Please enter %d student marks:\n", noOfStudents);
  for(cnt = 0 ; cnt < noOfStudents ; cnt++){
    printf("%d> ", cnt + 1);
    scanf("%d", &mark[cnt]);
    if (mark[cnt] > highestMark) {
      highestMark = mark[cnt];
    }
  }
  printf("The highest mark between the following\n");
  for (cnt = 0; cnt < noOfStudents; cnt++) {
    printf("%d ", mark[cnt]);
  }
  printf("\nis: %d\n", highestMark);
  return 0;
}