#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char name[41];
  int noOfSubs;
  double gpa;
  printf("Please enter the name, number subject taken and the GPA, comma seperated.\n: ");
  scanf("%[^,],%d,%lf", name, &noOfSubs, &gpa);
  printf("Name: %s\nNo Of Subjects: %d\nGpa: %.1lf\n", name, noOfSubs, gpa);
  return 0;
}