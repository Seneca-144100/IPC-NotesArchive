#include <stdio.h>
int main(){
   int
      i,
      number,
      sum = 0;
   for (i = 0; i < 5; i++){
      printf("%d- Enter a number: ", i+1);
      scanf("%d", &number);
      sum += number;
   }
   printf("the average is: %.3lf\n", (double)sum / 5);
   return 0;
}