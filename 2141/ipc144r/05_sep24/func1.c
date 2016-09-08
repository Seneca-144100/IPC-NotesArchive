#include <stdio.h>
void prnOdds(int max);

int main(){
   int
      num;
   printf("Enter a positive number: ");
   scanf("%d", &num);
   prnOdds(num);
   return 0;
}
void prnOdds(int max){
   while (max > 0){
      if (max % 2 == 1){
         printf("%d ", max);
      }
      max = max - 1;
   }
   putchar('\n');
}