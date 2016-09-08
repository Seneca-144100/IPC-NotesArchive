#include <stdio.h>
int main(){
   int
      i,
      n;
   printf("Please enter the number of \"whatever\"s: ");
   scanf("%d", &n);
 /*  i = 0;
   while (i < n){
      printf("whatever");
      i++;
   } */
   
   for (i = 0; i < n; i++){
      printf("whatever");
   }

   return 0;
}
