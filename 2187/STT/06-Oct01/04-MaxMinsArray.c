#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_ST_NO 200
int getInt(void);
double getDouble(void);

int main(void) {
  double mark[MAX_ST_NO];
  double best;
  double worst;
  int stno[MAX_ST_NO];
  int bestStno;
  int worstStno;
  int NoOfStds;
  double sum = 0.0;
  int i;
  printf("No of Std: ");
  NoOfStds = getInt();
  printf("Please enter %d marks below:\n", NoOfStds);
  for (i = 0; i < NoOfStds; i++) {
    printf("%d- mark > ", i + 1);
    mark[i] = getDouble();
    printf("%d- student number > ", i + 1);
    stno[i] = getInt();
    sum += mark[i]; // sum = sum + mark;
    if (i == 0) {  // this is the first entry
      best = worst = mark[i];
      bestStno = worstStno = stno[i];
    }
    else {
      if (mark[i] < worst) { // worst is not worst any more, mark is
        worst = mark[i];
        worstStno = stno[i];
      }
      if (mark[i] > best) { // best is not best anymore , mark is
        best = mark[i];
        bestStno = stno[i];
      }
    }
  }
  printf(" Row  Student Number  Mark   Comment\n"
         " ===  ============== ====== ========\n");
  for (i = 0; i < NoOfStds; i++) {
    printf("%3d %14d %6.1lf ", i + 1, stno[i], mark[i]);
    if (stno[i] == bestStno) {
      printf("BEST");
    }
    if (stno[i] == worstStno) {
      printf("WORST");
    }
    printf("\n");
  }
  printf("=============================================\n");
  printf("And the average of the clase is %.1lf\n", sum / NoOfStds);
  return 0;
}

