#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gcc prg.c myio.c funcs.c -o project<ENTER>
int main(void) {
  char grade;
  printf("Please enter the grade: ");
  scanf("%c", &grade);
  switch (grade) {
  case 'A':
  case 'a':
    printf("80%% and higher\n");
    break;
  case 'B':
  case 'b':
    printf("70 to 80%%\n");
  case 'C':
  case 'c':
    printf("60 to 70%%\n");
    break;
  case 'D':
  case 'd':
    printf("50 to 60%%\n");
    break;
  default:
    printf("Below 50\n");
    break;
  }
  return 0;
}