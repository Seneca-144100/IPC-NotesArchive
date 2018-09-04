


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void welcome(void) {
  printf("Welcome to the Assessment Analyzer program\n\n");
}
int main(void) {
  int counter;
  int noOfMarks;
  int marks[100];
  int stNo[100];
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
  
  for (counter = 0; counter < noOfMarks; counter++) {
    printf("%d: [studnetNo mark]\n", counter + 1);
    scanf("%d %d", &stNo[counter], &marks[counter]);
    sum += marks[counter];
    if (marks[counter] == 50) {
      justPassed++;
      passed++;
    }
    else if (marks[counter] > 50) {
      passed++;
    }
    else {
      failed++;
    }
   
  }
  printf("Row |   St No   |Mark | Passed\n==============================\n");
  counter = 0;
  while (counter < noOfMarks) {
    printf("%-3d | %09d |  %3d | ", counter + 1, stNo[counter], marks[counter]);
    if (marks[counter] == 50) {
      printf("Barely\n");
    }
    else if (marks[counter] > 50) {
      printf("Yes\n");
    }
    else {
      printf("No\n");
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