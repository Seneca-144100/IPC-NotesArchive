#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
int main(void) {
   FILE* fptr;
   int i;
   //fptr = fopen("data.txt", "w"); // overwrites the old with new or creates new
   fptr = fopen("data.txt", "a"); // creare or if exists append
   if (fptr == (FILE*)NULL) {
      printf("could not open file to append\n");
   }
   else {
      for (i = 0; i > -1000; i--) {
         fprintf(fptr, "%d\n", i);
      }
      fclose(fptr);
   }
   return 0;
}
