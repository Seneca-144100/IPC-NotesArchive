#include <stdio.h>
int main(){
   int
      i,
      number[5],
      sum = 0;
   for (i = 0; i < 5; i++){
      printf("%d- Enter a number: ", i+1);
      scanf("%d", &number[i]);
      sum += number[i];
   }
   printf("the average of ");
   for (i = 0; i < 5; i++){
      printf("%d ", number[i]);
   }
   printf(" is: %.3lf\n", (double)sum / 5);
   return 0;
}