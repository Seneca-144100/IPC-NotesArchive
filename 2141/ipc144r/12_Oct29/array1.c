#include <stdio.h>
int main(){
   int
      i,
      number,
      sum = 0;
   for (i = 0; i < 5; i++){
      printf("%d- Enter number: ", i+1);
      scanf("%d", &number);
      sum += number;
   }
   printf("Average is: %d\n", sum/5);
   return 0;
}