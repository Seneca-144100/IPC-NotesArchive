#include <stdio.h>
int main(){
   int
      a = 1;
   int
      b = 2;
   int
      c;
   c = a + b * 3;
   /* here c is 7*/
   c = (a + b) * 3;
   /* here c is 9*/
   c = (a + b) * 3;
   /* here c is 27*/

   return 0;
}