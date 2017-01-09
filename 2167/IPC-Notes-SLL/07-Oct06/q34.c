#include <stdio.h>
int main(void) {
   int a[50];
   int i;
   int num;
   int first = 1;
   printf("num: ");
   scanf("%d", &num);
   for (i = 0;i < num;i++) scanf("%d", &a[i]);
   for (i = num - 1;i >= 0;i--) {
     
      if (a[i] % 3) {
         if (first) {
            printf("%d", a[i]);
            first = 0;
         }
         else {
            printf(", %d", a[i]);
         }
         
      }
   }

   return 0;
}