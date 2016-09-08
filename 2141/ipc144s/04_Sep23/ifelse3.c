#include <stdio.h>
int main(){
   int
      num;
   int res;
   printf("Please enter number of items: ");
   res = scanf("%d", &num);
   if (res < 0){
      printf("Can not read!\n");
   }
   else if (res == 0){
      printf("Learn math!\n");
   }
   else if (num <= 0){
      printf("Get a life!\n");
   }
   else if (num < 2){
      printf("No discount!\n");
   }
   else if (num < 10){
      printf("5%% discount.\n");
   }
   else if (num<100){
      printf("15%% discount.\n");
   }
   else{
      printf("30%% discount.\n");
   }

   return 0;
}