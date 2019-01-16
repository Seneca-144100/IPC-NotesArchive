#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "package.h"
void skipBadData(FILE* f, int NoOfFields, int* resptr);

int main(void) {
   FILE* fptr;
   struct Package item;
   int res;
   int ch;
   fptr = fopen("package.txt", "r");
   if (fptr == NULL) {
      printf("Failed to open the file\n");
   }
   else {  
      header();
      do {  //start a loop
         res = ReadPackage(fptr, &item);
         if (res >= 0 && res <5) {    // bad data, scanf failed
            skipBadData(fptr, 5, &res);
            printf("bad file, fix the format\n");
         }
         else if (res == EOF) {  // if end of file
            printf("End of file reached!\n");
         }
         else {  // everything, ok, process the data
            printPackageInfo(&item);
         }
      } while (res == 5);
      fclose(fptr);
   }
   return 0;
}

void skipBadData(FILE* f, int NoOfFields, int* resptr) {
   int ch;
   do {
      ch = fgetc(f);
   } while (ch != EOF && ch != '\n');
   if (ch != EOF) {
      *resptr = NoOfFields;
   }
}
