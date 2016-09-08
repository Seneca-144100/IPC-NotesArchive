
#include <stdio.h>
int main(){
   int 
      i;
   int 
      n;
   printf("Please enter the number of numbers: ");
   scanf("%d", &n);
   i=1;
   do{  // buggy, because this will happen at least once
      printf("%d ", i);
      i++;
   }while(i<=n);

   putchar('\n');
   return 0;
}

