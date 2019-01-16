#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
   int a[3][5] = {
      /*0 */   {10,20,30,40,50},
      /*1 */   {100,200,300,400,500},
      /*2 */   {1000,2000,3000,4000,5000} };
   int i, j;
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 5; j++) {
         printf("%-4d ", a[i][j]);
      }
      putchar('\n');
   }
   return 0;
}