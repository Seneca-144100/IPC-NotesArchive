#include <stdio.h>
int main(){
   int
      a,
      b;
   a = 10;
   a++;
   printf("a: %d\n", a);
   b = a++;
   printf("a: %d\n", a);
   printf("b: %d\n", b);
   printf("b: %d\n", b++);
   printf("b: %d\n", ++b);
   return 0;
}