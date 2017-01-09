#include <stdio.h>
int main(void) {
   int i, j;
   int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
   for (i = 0; i < 3; i++) {
      printf("%d ", a[i]);
   }
   printf("\n========\n");
   for (i = 0; i < 2; i++) {
      for (j = 0; j <= i; j++) {
         printf("%d ", a[i + j]);
      }
      printf("\n");
   }
}

/*
10 20 30
========
10
20 30
*/