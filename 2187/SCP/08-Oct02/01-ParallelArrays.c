#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define MAX_NO_STD 200

int getInt(void);
double getDouble(void);



int main(void) {
  double gpa[MAX_NO_STD];
  int stno[MAX_NO_STD];
  double high;
  double low;
  int h_stno;
  int l_stno;
  int cnt;
  int NoOfMarks;
  // data assessment
  printf("Please enter the number of GPA entries: ");
  NoOfMarks = getInt();
  // data entry
  printf("Please enter %d Student GPAs:\n", NoOfMarks);
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    printf("%d >\n", cnt + 1);
    printf("Gpa: ");
    gpa[cnt] = getDouble();
    printf("Student Number: ");
    stno[cnt] = getInt();
  }

  // data analysis
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    if (cnt == 0) { // first time 
      high = low = gpa[cnt];
      h_stno = l_stno = stno[cnt];
    }
    else { // not first time
      if (gpa[cnt] < low) {
        low = gpa[cnt];
        l_stno = stno[cnt];
      }
      if (gpa[cnt] > high) {
        high = gpa[cnt];
        h_stno = stno[cnt];
      }
    }
  }

  //    23.4534     %5.2lf    23.45
  //     2.1                   2.10
  // report
  printf("Row  Stno    GPA  Comment\n");
  printf("=== ======== ===  =======\n");
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    printf("%3d  %6d  %3.1lf  ", cnt + 1,stno[cnt], gpa[cnt]);
    if (stno[cnt] == h_stno) {
      printf("Highest");
    }
    if (stno[cnt] == l_stno) {
      printf("Lowest");
    }
    printf("\n");
  }
  //  printf("the highest marks is: %d and lowest gpa is: %d\n", high, low);
  return 0;

}

