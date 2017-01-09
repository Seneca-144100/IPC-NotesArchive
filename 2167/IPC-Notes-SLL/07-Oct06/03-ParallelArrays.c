
#include <stdio.h>
struct Student {
   int stno;
   double ipc;
   double uli;
   double apc;
};
int main(void) {
   struct Student S;
   
   struct Student std[35];

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
      scanf("%d", &std[i].stno);
      printf("Please enter the marks for IPC, ULI and APC space separeted : \n");
      scanf("%lf %lf %lf", &std[i].ipc, &std[i].uli, &std[i].apc);
   }
   for (i = 0;i < NoOfStd;i++) {
      
   }

   return 0;
}