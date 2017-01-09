
#include <stdio.h>
int main(void) {
   double num;  // integers to print
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

   for (i = 0;i < cnt; i++) {
  /*    int row;
      row = i + 1;*/
      printf("%d> ", i + 1);
      scanf("%lf", &num);
      total += num;
   }
   printf("The sum is %.2lf\n", total);
   printf("Program ended!\n");
   return 0;
}