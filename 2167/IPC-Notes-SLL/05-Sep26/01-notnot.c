#include <stdio.h>
int main(void) {
   int x = 25;
   int y;
   y = !x;
   printf("y = !x;---> %d\n", y);
   y = !!x;
   printf("y = !!x;---> %d\n", y);
   return 0;
}