#include <stdio.h>
int main() {
   int i;

   i = 0;  // init
   while (i < 10) {  // cont
                     // body of the loop
      printf("%d ", i);
      i++;           // counter
   }
   printf("\n");

   printf("Done!\n");
   return 0;
}