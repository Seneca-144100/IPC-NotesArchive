#include <stdio.h>
int main(){
   int
      i,
      j = 2,
      l = 0;
   char
      ch = 'A';
   for (i = 0; i < 5; i++){
      printf("%d, ", i);
      while (++l < 2){ // value of l will be added before line regardless of the condition being
                       // true or false
         printf("%d, ", j += 2);
      }
      printf("%c\n", ch + l);
   }
   return 0;
}