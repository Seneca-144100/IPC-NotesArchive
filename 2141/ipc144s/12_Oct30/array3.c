// make the output comma separated with an "and" at the end
// the average of
// 10, 20, 30, 40, 50 and 60
// is whatver
// and make entries foolproof, (validating the number of numbers and getting and integer)
// 
// for extra marks
// prompt the user with proper english sequence numbers:
// enter the 1st number:
// enter the 2nd number:
// enter the 3rd number:
// enter the 4th number
//...
//...
// enter the 21st number:

#include <stdio.h>
int main(){
   int
      i,
      number[200],
      sum = 0,
      count;
   printf("Please enter the number of numbers (maximum of 200): ");
   scanf("%d", &count);
   for (i = 0; i < count; i++){
      printf("%d- Enter a number: ", i+1);
      scanf("%d", &number[i]);
      sum += number[i];
   }
   printf("the average of ");
   for (i = 0; i < count; i++){
      printf("%d ", number[i]);
   }
   printf(" is: %.3lf\n", (double)sum / count);
   return 0;
}