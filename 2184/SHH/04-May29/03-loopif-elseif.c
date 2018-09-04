#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void welcome(void) {
  printf("Welcome to the Assessment Analyzer program\n\n");
}
int main(void) {
  int counter;
  int noOfMarks;
  int mark;
  int passed;
  int justPassed;
  int failed;
  double sum;
  welcome();
  printf("Please enter the number of marks for analysis: ");
  scanf("%d", &noOfMarks);
  printf("Please enter %d marks for the assessment:\n", noOfMarks);
  passed = 0;
  failed = 0;
  justPassed = 0;
  sum = 0;
  counter = 0;
  while (counter < noOfMarks) {
    printf("%d: ", counter + 1);
    scanf("%d", &mark);
    sum += mark;
    if (mark == 50) {
      justPassed++;
    }
    else if (mark >50) {
      passed++;
    }
    else {
      failed++;
    }
    counter++;
  }
  printf("Total of %d students passed the assessment, while %d of them failed.\n", passed + justPassed, failed);
  printf("%d students where \"borderline\" passes\n", justPassed);
  printf("The average mark in class is %.1lf, which is a ", sum / noOfMarks);
  if (sum / noOfMarks > 49.99) {
    printf("pass\n");
  }
  else {
    printf("fail\n");
  }
  return 0;
}