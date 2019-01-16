#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
#include "package.h"

int main(void) {
   FILE* fptr;
   struct Package item;
   int num;
   int res;
   fptr = fopen("package.txt", "r"); 
   if (fptr == (FILE*)NULL) {
      printf("could not open file for reading\n");
   }
   else {
      header();
      do {
         res = ReadPackage(fptr, &item);
         if (res > 0 && res != 5) {
            printf("\nFile is bad after the follwing record, fix it!\n");
            printPackageInfo(&item);
         }
         else if (res == EOF) {
            printf("\nEnd of data!\n");
         }
         else { 
            printPackageInfo(&item);
         }
      } while (res == 5);
   fclose(fptr);
   }
   printf("\n");
   return 0;
}
