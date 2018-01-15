#define _CRT_SECURE_NO_WARNINGS
//gcc prg.c utilities.c 
#include <stdio.h>
#include "utilities.h"
int main(void) {
  int a;
  double d;
  char c;
  int ret;
  do {
    printf("> ");
    ret = scanf("%d,%lf,%c", &a, &d, &c);
    printf("scanf returned: %d\n", ret);
    flushKeyboard();
  } while (ret != 0);
  return 0;
}