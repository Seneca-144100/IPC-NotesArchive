#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gcc prg.c myio.c funcs.c -o project<ENTER>
int main(void) {
  int done = 0;
  while (!done){
    printf("do whatever\n");
    printf("do you want to stop? (1= yes, 0=no): ");
    scanf("%d", &done);
  }

  return 0;
}