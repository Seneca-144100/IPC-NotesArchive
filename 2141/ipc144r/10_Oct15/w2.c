//2 - determine the exact output of the following program[1 mark] 
#include <stdio.h>
int main(void){
   int
      i;
   for (i = 0; i<10000; i++){
      i += 2;
   }
   printf("%d", i);
   return 0;
}
