#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void welcome(void) {
  printf("Welcome to the Assessment Analyzer program\n\n");
}
int main(void) {
  int counter;
  int noOfMarks;
  int mark;
  double sum;
  welcome();
  printf("Please enter the number of marks for analysis: ");
  scanf("%d", &noOfMarks);
  printf("Please enter %d marks for the assessment:\n", noOfMarks);
  counter = 0;
  sum = 0;
  while (counter < noOfMarks) {
    printf("%d: ", counter + 1);
    scanf("%d", &mark);
    sum += mark;
 //   sum = sum + mark;
    counter++;
  }
  printf("The average mark in class is %.1lf\n", sum / noOfMarks);
  return 0;
}