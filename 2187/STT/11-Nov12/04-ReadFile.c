#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"

int main(void) {
   FILE* fptr;
   char name[21] = "Empty";
   int width = -1;
   int length = -1;
   int height = -1;
   double weight  =-1;

   int num;
   int res;
   fptr = fopen("package.txt", "r"); 
   if (fptr == (FILE*)NULL) {
      printf("could not open file for reading\n");
   }
   else {
      do {
         res = fscanf(fptr, "%[^,],%d,%d,%d,%lf\n", name, &width, &length, &height, &weight);
        
         if (res > 0 && res != 5) {
            printf("\nFile is bad after the follwing record, fix it!\n");
            printf("%-20s,%2d,%2d,%2d,%4.1lf\n", name, width, length, height, weight);
         }
         else if (res == EOF) {
            printf("\nEnd of data!\n");
         }
         else { 
            printf("%-20s,%2d,%2d,%2d,%4.1lf\n", name, width, length, height, weight);
         }
      } while (res == 5);
   fclose(fptr);
   }
   printf("\n");
   return 0;
}
