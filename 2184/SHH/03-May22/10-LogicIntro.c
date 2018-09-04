#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt = 0;
  int mark;
  int NoOfMarks;
  double sum = 0;
  printf("Please enter the number of students in class: ");
  scanf("%d", &NoOfMarks);
  printf("Please enter %d marks:\n", NoOfMarks);
  while (cnt < NoOfMarks) {
    printf("%d: ", cnt + 1);
    scanf("%d", &mark);
    sum += mark;
    cnt++;
  }
  printf("The average of the quiz is %.2lf\n", sum / NoOfMarks);
  return 0;
}