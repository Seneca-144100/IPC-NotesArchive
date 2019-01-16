#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
   int i;
   FILE* fptr;
   fptr = fopen("nums.txt", "w"); // create or overwrite
   if (fptr == NULL) {
      printf("Failed to open the file\n");
   }
   else {
      for (i = 1;i < 100000;i++) {
         fprintf(fptr, "|%8.5d|\n", i);
      }

      fclose(fptr);
   }
   return 0;
}