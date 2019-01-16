#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int getInt(void);
int main(void) {
  int mark[200];
  int high;
  int low;
  int cnt;
  int NoOfMarks;
  // data assessment
  printf("Please enter the number of marks: ");
  NoOfMarks = getInt();
  // data entry
  printf("Please enter %d marks:\n", NoOfMarks);
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    printf("%d > ", cnt + 1);
    mark[cnt] = getInt();
  }

  // data analysis
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    if (cnt == 0) { // first time 
      high = low = mark[cnt];
    }
    else { // not first time
      if (mark[cnt] < low) {
        low = mark[cnt];
      }
      if (mark[cnt] > high) {
        high = mark[cnt];
      }
    }
  }
  // report
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    printf("%d: %d", cnt + 1, mark[cnt]);
    if (mark[cnt] == high) {
      printf(" <=== Highest");
    }
    if (mark[cnt] == low) {
      printf(" <=== Lowest");
    }
    printf("\n");
  }
//  printf("the highest marks is: %d and lowest mark is: %d\n", high, low);
  return 0;

}

