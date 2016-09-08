#include <stdio.h>
int main(){
   int
      a;
   char
      ch,
      chres;
   chres = ch + (char)a; /* forcing the int a to be down-casted to a
                            char before evaluation*/
   return 0;
}