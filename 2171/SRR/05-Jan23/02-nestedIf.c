#include <stdio.h>
int main() {
   int i;
   printf("Please enter an int: ");
   scanf("%d", &i);
   if (i > 10) {
      printf("I is greater than 10!\n");
   }
   else {
      if (i == 10) {
         printf("I is 10!\n");
      }
      else {
         printf("I is less than 10!\n");
      }
   }

   
   printf("Done!\n");
   return 0;
}