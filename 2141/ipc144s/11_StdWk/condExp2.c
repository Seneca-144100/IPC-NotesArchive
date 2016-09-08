#include <stdio.h>
int main(){
   int
      i = 0;
   while (i++ < 5){
      i % 2 == 0 ? printf("Hi") : printf("Hello") ;
   }
   return 0;
}