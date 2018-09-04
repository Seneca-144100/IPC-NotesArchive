#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int counter;
  int noOfMarks;
  int mark;
  int passed;
  int failed;
  double sum;
  printf("Welcome to the Assessment Analyzer program\n\n");
  printf("Please enter the number of marks for analysis: ");
  scanf("%d", &noOfMarks);
  printf("Please enter %d marks for the assessment:\n", noOfMarks);
  sum = 0;
  counter = 0;
  passed = 0;
  failed = 0;
  while (counter < noOfMarks) {
    printf("%d: ", counter + 1);
    scanf("%d", &mark);
    sum += mark;
    if (mark >= 50) {
      passed++;
    }
    else {
      failed++;
    }
    counter++;
    /*++counter;
    counter = counter + 1;
    counter += 1;*/
  }
  printf("Total of %d students passed the assessment, while %d of them failed.\n", passed, failed);
  printf("The average mark in class is %.1lf\n", sum / noOfMarks);
  return 0;
}