//3- determine the exact output of the following program [4 marks]
#include <stdio.h>
int main(void){
   int
      i = 0, j, k = 0;
   while (i < 10){
      i++;
      if (i % 3 == 0){
         i++;
      }
      else{
         j = k++;
         while (j < i){
            printf("*");
            j++;
         }
         printf("%c\n", 'I' + k - i);
      }
   }
   i++;
   printf("%03d-%-3d-%3.2d", i - 4, j, k);
   return 0;
}
