#include <stdio.h>
int main(){
   int
      i,
      j = 2,
      k = 3;
   char
      ch = 'A'; 
   for (i = 0; i < 5; i++){
      printf("%d, ", i);
      printf("%d, ", j += 2);
      printf("%d, ", k++);
      printf("%d, ", ++k);
      printf("%c\n", ch + k);
   }
/*   i = 0;
   while (i < 5){
      printf("%d, ", i);
      printf("%d, ", j += 2);
      printf("%d, ", k++);
      printf("%d\n", ch + k);
      printf("%c, ", ++k);
      i++;
   } */
   return 0;
}