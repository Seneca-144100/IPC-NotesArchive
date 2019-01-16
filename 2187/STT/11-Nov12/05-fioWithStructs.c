#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
struct Package {
   char name[21];
   int width;
   int length;
   int height;
   double weight;
};

int ReadPackage(FILE* fptr, struct Package* p) {
   return fscanf(fptr, "%[^,],%d,%d,%d,%lf\n", p->name, &p->width, &p->length, &p->height, &p->weight);
}
void printPackageInfo(const struct Package* p) {
   printf("%-20s|%2d|%2d|%2d|%4.1lf\n", p->name, p->width, p->length, p->height, p->weight);
}
void header(void) {
   printf(" Name               |W |L |H |Wght\n");
   printf("====================+==+==+==+====\n");
}

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
