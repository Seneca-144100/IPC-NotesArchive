#include <stdio.h>
int main(){
   int
      i = 5,
      l = 0,
      j;
   while (i){   //(i != 0){
      j = --i % 2 == 0 ? printf("Hi") : printf("Hello");
      for (l = 0; l < j; l++){
         putchar('*');
      }
      printf("%d\n", j);
   }
   return 0;
}