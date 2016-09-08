//1- determine the exact output of the following program [2 marks]
#include <stdio.h>
int main(void){
   int i, j;
   for (i = 0; i < 100000000; i++){
     printf("\r %d          ", i);
     for (j = 0; j < 1000; j++){
        printf("\r ");
     }
   }
   printf("\nDone!\n");
   return 0;
}

