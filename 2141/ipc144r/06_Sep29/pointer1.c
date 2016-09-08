#include <stdio.h>
int main(){
   double
      d;
   double*
      p = &d;
   //where p is pointing to;
   *p = 3.25;
   printf("%lf\n", d);
   return 0;
}