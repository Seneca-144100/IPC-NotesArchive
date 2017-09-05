#include <stdio.h>
int main() {
   int num;
   int counter = 0;
   double theNumber;
   double sum = 0.0;
   printf("Number of numbers: ");
   scanf("%d", &num);
   printf("Enter the numbers:\n");
   while (counter < num) {
      printf("%d: ", counter +1);
      scanf("%lf", &theNumber);
      sum = sum + theNumber;
      counter++;
   }
   printf("The sum is: %lf\n", sum);
   printf("Done!\n");
   return 0;
}