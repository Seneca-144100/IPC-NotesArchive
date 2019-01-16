#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void prn5Ints(int x[][5], int size) {
   int i, j;
   for (i = 0; i < size; i++) {
      for (j = 0; j < 5; j++) {
         printf("%-4d ", x[i][j]);
      }
      putchar('\n');
   }
}

int main(void) {
   int a[3][5] = {
      {10, 20, 30, 40, 50},
      {100,200,300,400,500},
      {1000,2000,3000,4000,5000}
   };
   prn5Ints(a, 3);
   printf("Please enter a value for a[1][2]: ");
   scanf("%d", &a[1][2]);
   prn5Ints(a, 3);
   return 0;
}