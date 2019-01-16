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
      high = low = mark;
    }
    else { // not first time
      if (mark < low) {
        low = mark;
      }
      if(mark > high) {
        high = mark;
      }
    }
  }
  printf("the highest marks is: %d and lowest mark is: %d\n", low, high);
  return 0;
}

