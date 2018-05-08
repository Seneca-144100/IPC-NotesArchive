#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXSTDNO 100
int main(void) {
  int stNo[MAXSTDNO];
  double ipcMark[MAXSTDNO];
  double uliMark[MAXSTDNO];
  double eacMark[MAXSTDNO];
  int num;
  int i;
  int done = 0;
  int stnoEntry;
  int found;
  printf("Please enter the number of students: ");
  scanf("%d", &num);
  printf("pleaes enter the marks: \n");
  for (i = 0; i < num; i++) {
    printf("%d:\n", i + 1);
    printf("Student number: ");
    scanf("%d", &stNo[i]);
    printf("ipc: ");
    scanf("%lf", &ipcMark[i]);
    printf("uli: ");
    scanf("%lf", &uliMark[i]);
    printf("eac: ");
    scanf("%lf", &eacMark[i]);
  }
  // search and report

  while (!done) {
    printf("Please enter the student number:");
    scanf("%d", &stnoEntry);
   found = 0;
   for (i = 0; i < num; i++) {
      if (stnoEntry == stNo[i]) {
        printf("Student marks: ipc: %.2lf, uli: %.2lf, eac: %.2lf\n", 
          ipcMark[i], uliMark[i], eacMark[i]);
        found = 1;
      }
    }
    if (!found) {
      printf("Not Found!\n");
    }
    printf("Done searching? 1/0: ");
    scanf("%d", &done);
  }

  return 0;
}