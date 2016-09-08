
#include <stdio.h>
int main(){
   int 
      i;
   int 
      n;
   printf("Please enter the number of numbers: ");
   scanf("%d", &n);
 /*  i=1;
   while(i<=n){
      printf("%d ", i);
      i++;
   }*/
   for(i=1;i<=n;i++){
      printf("%d ", i);
   }
   putchar('\n');
   return 0;
}

