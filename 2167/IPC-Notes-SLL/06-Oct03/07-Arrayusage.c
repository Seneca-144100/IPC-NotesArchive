
#include <stdio.h>
int main(void) {
   double num[10];  // double numbers
   double total = 0;
   int cnt;// a number to be recieved from user
   int i;
   do {
      printf("Please enter a number of doubles: (less than 10): ");
      scanf("%d", &cnt);
      if (cnt > 10 || cnt < 1) {
         printf("Invalid entry, ");
      }
   } while (cnt > 10 || cnt < 1);
// data entry
   for (i = 0;i < cnt; i++) {
      printf("%d> ", i + 1);
      scanf("%lf", &num[i]);
   }
// data processing
   for (i = 0;i < cnt; i++) {
      total += num[i];
   }
// data presentation
   printf("Sum of ");
   for (i = 0;i < cnt; i++) {
      printf("%0.4lf ",num[i]);
   }
   printf(" is %.2lf\n", total);
   printf("Program ended!\n");
   return 0;
}