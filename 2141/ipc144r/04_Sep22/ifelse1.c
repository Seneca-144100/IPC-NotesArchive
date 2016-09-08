#include <stdio.h>
int main(){
   int
      num;
   printf("Please enter number of items: ");
   scanf("%d", &num);
   if (num < 2){
      printf("no discount!\n");
   }
   else{
      if (num < 5){
         printf("5% discount\n");
      }
      else{
         if (num < 100){
            printf("15% discount\n");
         }
         else{
            printf("30% discount\n");
         }
      }
   }
   return 0;
}