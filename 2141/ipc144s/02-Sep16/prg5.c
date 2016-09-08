#include <stdio.h>
int main(){
   int
      b;
   b = 5;
   /* here b is 5*/
   b = b + 2;
   /* here b is 7*/
   b = 3 + b * 2;
   /* here b is 17*/
   b = (3 + b) * 2;
   /* here b is 40*/
   return 0;
}