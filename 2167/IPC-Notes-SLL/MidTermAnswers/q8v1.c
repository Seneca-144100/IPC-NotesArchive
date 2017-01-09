#include <stdio.h>
int main(void) {
   int i, j;
   int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
   for (i = 1; i < 4; i++) {
      printf("%d ", a[i]);
   }
   printf("\n========\n");
   for (i = 1; i < 3; i++) {
      for (j = 1; j <= i; j++) {
         printf("%d ", a[i + j]);
      }
      printf("\n");
   }
}

/*
20 30 40
========
30
40 50
*/