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
  int failed;
  double sum;
  welcome();
  printf("Please enter the number of marks for analysis: ");
  scanf("%d", &noOfMarks);
  printf("Please enter %d marks for the assessment:\n", noOfMarks);
  passed = 0;
  failed = 0;
  sum = 0;
  counter = 0;  
  while (counter < noOfMarks) {
    printf("%d: ", counter + 1);
    scanf("%d", &mark);
    sum += mark;
    if (mark >= 50) {
      passed++;
      //passed = passed + 1;
      //passed += 1;
    }
    else {
      failed++;
    }
    counter++;
  }
  printf("Total of %d students passed the assessment, while %d of them failed.\n", passed, failed);
  printf("The average mark in class is %.1lf\n", sum / noOfMarks);
  return 0;
}