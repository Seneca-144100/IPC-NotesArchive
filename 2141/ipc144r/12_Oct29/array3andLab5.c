#include <stdio.h>
// for lab 5
// make this code foolproof, 
// make sure count is > 0 and <=200
// format the printout to separate the numbers with comma in following way
//
// the average of 
// 99, 99, 99, 99 and 99
// is 99.
//
// for extra marks, make the prompt to work like this:
/* Enter 1st number:
       2nd number:
         3rd number:
         4th....
         21st,
  use propet english term for sequence numbers
  */
// for evem more extra marks
/* print the numbers in ascending order using bubble sort*/


int main(){
   int 
      i,
      number[200],
      sum = 0,
      count;
   printf("Please enter the number of numbers to get an average for (max 200): ");
   scanf("%d", &count);
   for (i = 0; i < count; i++){
      printf("%d- Enter number: ", i+1);
      scanf("%d", &number[i]);
      sum += number[i];
   }
   printf("the average of ");
   for (i = 0; i < count; i++){
      printf("%d ", number[i]);
   }
   printf(" is: %.3lf\n", (double)sum/count);
   return 0;
}