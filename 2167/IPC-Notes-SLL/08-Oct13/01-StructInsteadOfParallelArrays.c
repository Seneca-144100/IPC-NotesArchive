
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
   int highIndex;
   int lowIndex;
   double highVal;
   double lowVal;
   /*S.stno = 0;
   std[5].stno = 123;*/
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


   //prcessing

   highVal = lowVal = (std[0].ipc + std[0].uli + std[0].apc) / 3; // average of marks
   highIndex = lowIndex = 0;
   for (i = 1;i < NoOfStd;i++) {
      if (highVal < (std[i].ipc + std[i].uli + std[i].apc) / 3) {
         highVal = (std[i].ipc + std[i].uli + std[i].apc) / 3;
         highIndex = i;
      }
      if (lowVal > (std[i].ipc + std[i].uli + std[i].apc) / 3) {
         lowVal = (std[i].ipc + std[i].uli + std[i].apc) / 3;
         lowIndex = i;
      }
   }
   // output
   printf("Highest average, stno: %d, ipc: %0.1lf, uli: %0.1lf, apc: %0.1lf \n",
      std[highIndex].stno, std[highIndex].ipc, std[highIndex].uli, std[highIndex].apc);
   printf("Lowest average, stno: %d, ipc: %0.1lf, uli: %0.1lf, apc: %0.1lf \n", 
      std[lowIndex].stno, std[lowIndex].ipc, std[lowIndex].uli, std[lowIndex].apc);
   return 0;
}