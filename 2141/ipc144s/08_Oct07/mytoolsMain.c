
#include <stdio.h>
#include "mytools.h"

int main(){
   int
      a,
      b;
   char
      c;
   printf(">");
   scanf("%d", &a);
   keyflush();
   printf(">");
   scanf("%d", &b);
   keyflush();
   printf(">");
   scanf("%c", &c);
   keyflush();
   printf("%d-%d-%c-\n", a, b, c);
   return 0;
}
