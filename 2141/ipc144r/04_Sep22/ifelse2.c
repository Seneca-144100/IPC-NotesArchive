#include <stdio.h>
int main(){
   int
      num;
   printf("Please enter number of items: ");
   scanf("%d", &num);
   if (num < 2){
      printf("no discount!\n");
   }
   else if (num < 5){
      printf("5%% discount\n");
   }
   else if (num < 100){
      printf("15%% discount\n");
   }
   else{  /* if else is here, it is one of many selections, if not it is 0 or 1 of many selectins*/
      printf("30%% discount\n");
   }
   

   return 0;
}