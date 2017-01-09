#include <stdio.h>
int main(void) {
   int i;
   for (i = 1; i < 6; i += 2) {
      printf("X");
   }
   printf("%d\n", i);
   return 0;
}


/* output V1
XXX7
*/