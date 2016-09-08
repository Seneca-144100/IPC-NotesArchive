
#include <stdio.h>
int main(){
   int
      min, b, c;
   printf("Please enter two numbers: ");
   scanf("%d %d", &b, &c);
  /* if(b<c){
      min = b;
   }
   else{
      min = c;
   }
    */
   min = b<c?b:c;
   printf("%d is the smallest value between %d and %d:\n", min, b, c);
 /*  if(condition){
      T = value1;
   }
   else{
      T = value2;
   }
   
   T = condition?value1:value2;*/
   
   return 0;
}

