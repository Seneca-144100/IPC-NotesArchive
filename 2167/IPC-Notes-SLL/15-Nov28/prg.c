#include <string.h>
#include <stdio.h>
#include <ctype.h>



int main() {
   char names[10][41];

   int a[3][7] = { 
      {1  ,2  ,3  ,4  ,5  ,6  ,7  }  ,
      {11 ,22 ,33 ,44 ,55 ,66 ,77 } ,
      {111,222,333,444,555,666,777} };
   int* p = &a[0][0];
   int i, j, k;
   printf("%d\n", a[1][5]);
   for (j = 0; j < 3; j++) {
      for (k = 0;k < 7;k++) {
         printf("%3d ", a[j][k]);
      }
      putchar('\n');
   }
   putchar('\n');
   for (i = 0;i < 21;i++) {
      printf("%d ", p[i]);
   }
   putchar('\n');
   return 0;
} 