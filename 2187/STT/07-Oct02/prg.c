#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_ST_NO 200
int getInt(void);
double getDouble(void);
int getLimitedInt(int min, int max);
struct StudentMark {
  double mark;
  int stno;
};

struct StudentMark getStMark(void) {
  struct StudentMark st;
  printf("Student number > ");
  st.stno = getLimitedInt(99999, 999999);
  printf("Mark > ");
  st.mark = getDouble();
  return st;
}

int main(void) {
  struct StudentMark st[MAX_ST_NO] = { {0.0, 0} };
  double best;
  double worst;
  int bestStno;
  int worstStno;
  int NoOfStds;
  double sum = 0.0;
  int i;
  printf("No of Std: ");
  NoOfStds = getLimitedInt(10, 100);
  printf("Please enter %d marks below:\n", NoOfStds);
  // data entry
  for (i = 0; i < NoOfStds; i++) {
    printf("%d >\n", i + 1);
    st[i] = getStMark();
  }


  // data analysis
  for (i = 0; i < NoOfStds; i++) {
    sum += st[i].mark; // sum = sum + mark;
    if (i == 0) {  // this is the first entry
      best = worst = st[i].mark;
      bestStno = worstStno = st[i].stno;
    }
    else {
      if (st[i].mark < worst) { // worst is not worst any more, mark is
        worst = st[i].mark;
        worstStno = st[i].stno;
      }
      if (st[i].mark > best) { // best is not best anymore , mark is
        best = st[i].mark;
        bestStno = st[i].stno;
      }
    }
  }

  // report

  printf(" Row  Student Number  Mark   Comment\n"
    " ===  ============== ====== ========\n");
  for (i = 0; i < NoOfStds; i++) {
    printf("%3d %14d %6.1lf ", i + 1, st[i].stno, st[i].mark);
    if (st[i].stno == bestStno) {
      printf("BEST");
    }
    if (st[i].stno == worstStno) {
      printf("WORST");
    }
    printf("\n");
  }
  printf("=============================================\n");
  printf("And the average of the clase is %.1lf\n", sum / NoOfStds);
  return 0;
}

