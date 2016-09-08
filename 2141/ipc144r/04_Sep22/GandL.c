#include <stdio.h>
int main(){
   int
      a,
      b,
      c;
   a = 10;
   b = 20;
   c = a > b;
   printf("c = a > b, c: %d\n", c);
   c = b > a;
   printf("c = b > a, c: %d\n", c);
   return 0;
}