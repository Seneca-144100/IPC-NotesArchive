#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  int a[10] = { 10, 20, 30, 40,50, 60, 70 , 80, 90, 100 };
  int b[3][5] = { {10,20,30,40,50}, {60,70,80,90,100},{110, 120, 130, 140, 150} };
  int i, j;
  printf("row 1 elem 2: %d\n", b[1][2]);
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      printf("%-3d ", b[i][j]);
    }
    printf("\n");
  }
  printf("%d\n", *b[1]);

  return 0;
}