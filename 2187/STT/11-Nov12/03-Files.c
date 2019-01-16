#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
// scanf("%d%c%lf", &a, &b, &c);
int main(void) {
   FILE* fptr;
   int num;
   int res;
   fptr = fopen("data.txt", "r"); 
   if (fptr == (FILE*)NULL) {
      printf("could not open file for reading\n");
   }
   else {
      do {
         res = fscanf(fptr, "%d", &num);
         if (res == 0) {
            printf("\nFile is bad after the number %d, fix it!\n", num);
         }
         else if (res == EOF) {
            printf("\nEnd of data!\n");
         }
         else {
            printf("%d ", num);
         }
      //} while (res != 0 && res != EOF);
      } while (res > 0);
   fclose(fptr);
   }
   printf("\n");
   return 0;
}
