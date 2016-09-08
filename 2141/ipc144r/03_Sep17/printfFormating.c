#include <stdio.h>

int main(){
   int 
      i = 100;
   double 
      d = 2345.677;
   printf("The int i has <%08d>, and the double d has: <%010.2lf>\n", i, d);
   printf("The int i has <%-8d>, and the double d has: <%.2lf>\n", i, d);
   printf("The int i has <%2d>, and the double d has: <%4.2lf>\n", i, d);
   printf("The int i has <%2d>, and the double d has: <%-10.2lf>\n", i, d);
   return 0;
}