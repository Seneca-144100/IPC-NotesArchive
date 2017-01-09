#include <stdio.h>
int main(void) {
   double d = 234.5656;
   int x = 25;
   int y;
   printf("%.0lf\n", d);
   printf("%d\n", (int)d);
   printf("%d\n", x);
   printf("%d\n", x++);
   printf("%d\n", ++x);
   return 0;
}