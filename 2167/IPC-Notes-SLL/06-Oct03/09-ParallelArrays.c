
#include <stdio.h>
int main(void) {
   int stno[35];
   double ipc[35];
   double uli[35];
   double apc[35];
   int NoOfStd;
   int i;
   do {
      printf("Please enter the number of students(less than 36): ");
      scanf("%d", &NoOfStd);
      if (NoOfStd > 35 || NoOfStd < 1) {
         printf("Invalid entry, ");
      }
   } while (NoOfStd > 35 || NoOfStd < 1);
// data entry
   for (i = 0;i < NoOfStd;i++) {
      printf("Std No: ");
      scanf("%d", &stno[i]);
      printf("Please enter the marks for IPC, ULI and APC space separeted : \n");
      scanf("%lf %lf %lf", &ipc[i], &uli[i], &apc[i]);
   }
   for (i = 0;i < NoOfStd;i++) {
      
   }

   return 0;
}