#include <stdio.h>
#include <math.h>
int main(void) {
   int i = -10;
   for (; i < 11; i++) {
      printf("%d ", abs(i));
   }
   putchar('\n');
   return 0;
}