#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int getInt(void);
int main(void) {
  int mark;
  int high;
  int low;
  int cnt;
  int NoOfMarks;
  printf("Please enter the number of marks: ");
  NoOfMarks = getInt();
  printf("Please enter %d marks:\n", NoOfMarks);
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    printf("%d > ", cnt + 1);
    mark = getInt();
    if (cnt == 0) { // first time 
//      printf("first time: low and high are set to %d\n", mark);
      high = low = mark;
    }
    else { // not first time
//      printf("Checking mark: %d with low: %d and high:%d values\n", mark, low, high);
      if (mark < low) {
//        printf("mark < low, low set to %d\n", mark);
        low = mark;
      }
      if(mark > high) {
//        printf("mark > high, hig set to %d\n", mark);
        high = mark;
      }
    }
  }
  printf("the highest marks is: %d and lowest mark is: %d\n", low, high);
  return 0;
}

