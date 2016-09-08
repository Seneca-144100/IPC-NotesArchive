#include <stdio.h>
int main(){
   int
      a,
      b,
      c,
      d;
   a = 10;
   b = 20;
   c = 30;
   d = a > b || c > a;
   printf("d: %d\n", d);
   d = a > b || !(c > a);
   printf("d: %d\n", d);
   d = !(a > b) && !(c > a);
   printf("d: %d\n", d);
   return 0;
}