#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int counter;
  int noOfMarks;
  int mark;
  double sum;
  printf("Welcome to the Assessment Analyzer program\n\n");
  printf("Please enter the number of marks for analysis: ");
  scanf("%d", &noOfMarks);
  printf("Please enter %d marks for the assessment:\n", noOfMarks);
  sum = 0;
  counter = 0;
  while (counter < noOfMarks) {
    printf("%d: ", counter + 1);
    scanf("%d", &mark);
    sum += mark;
    counter++;
    /*++counter;
    counter = counter + 1;
    counter += 1;*/
  }
  printf("The average mark in class is %.1lf\n", sum / noOfMarks);
  return 0;
}