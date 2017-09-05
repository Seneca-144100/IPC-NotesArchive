#include <stdio.h>
int main() {
   int num;
   int counter = 0;
   double theNumber;
   double sum = 0.0;
   printf("Number of numbers: ");
   scanf("%d", &num);
   while (counter < num) {
      printf("Enter the number: ");
      scanf("%lf", &theNumber);
      sum = sum + theNumber;
      counter++;
   }
   printf("The sum is: %lf\n", sum);
   printf("Done!\n");
   return 0;
}