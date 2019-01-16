#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  int cnt;


  cnt = 0;
  while (cnt < 10) {
    printf("%d- Hello there\n", cnt+1);
    cnt = cnt + 1;
  }
  printf("----------------------------------------------------\n");
  for (cnt = 0; cnt < 10; cnt = cnt + 1) {
    printf("%d- Hello there\n", cnt+1);
  }

  return 0;
}