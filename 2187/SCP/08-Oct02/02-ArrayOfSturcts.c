#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_STD 200

int getInt(void);
double getDouble(void);

struct StudentGPA {
  int stno;
  double gpa;
};


int main(void) {
  struct StudentGPA st[MAX_NO_STD] = { {0,0.0} };
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
    st[cnt].gpa = getDouble();
    printf("Student Number: ");
    st[cnt].stno = getInt();
  }

  // data analysis
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    if (cnt == 0) { // first time 
      high = low = st[cnt].gpa;
      h_stno = l_stno = st[cnt].stno;
    }
    else { // not first time
      if (st[cnt].gpa < low) {
        low = st[cnt].gpa;
        l_stno = st[cnt].stno;
      }
      if (st[cnt].gpa > high) {
        high = st[cnt].gpa;
        h_stno = st[cnt].stno;
      }
    }
  }

  //    23.4534     %5.2lf    23.45
  //     2.1                   2.10
  // report
  printf("Row  Stno    GPA  Comment\n");
  printf("=== ======== ===  =======\n");
  for (cnt = 0; cnt < NoOfMarks; cnt++) {
    printf("%3d  %6d  %3.1lf  ", cnt + 1, st[cnt].stno, st[cnt].gpa);
    if (st[cnt].stno == h_stno) {
      printf("Highest");
    }
    if (st[cnt].stno == l_stno) {
      printf("Lowest");
    }
    printf("\n");
  }
  //  printf("the highest marks is: %d and lowest gpa is: %d\n", high, low);
  return 0;

}

