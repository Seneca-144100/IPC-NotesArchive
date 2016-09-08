#include <stdio.h>
int main(){
   int
      num;
   printf("Enter a positive number: ");
   scanf("%d", &num);
   while (num > 0){
      if (num % 2 == 1){
         printf("%d ", num);
      }
      num = num - 1;
   }
   putchar('\n');
   return 0;
}