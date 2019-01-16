#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
int main(void) {
   char textNum[41];
   char filename[128] = "data.txt";
   char filemode[4] = "a+";
   char str[81];
   FILE* fptr;
   fptr = fopen(filename, filemode);
   if (!fptr) {
      printf("Could not open \"%s\" for \"%s\"\n", filename, filemode);
   }
   else {
      printf("\"%s\" is open for \"%s\"\n", filename, filemode);
      rewind(fptr);
      fscanf(fptr, "%[^\n]\n", str);
      fscanf(fptr, "%[^\n]\n", str);
      fscanf(fptr, "%[^\n]\n", str);
      printf("str: %s\n", str);
      fscanf(fptr, "%[^\n]\n", str);
      printf("str: %s\n", str);
      fprintf(fptr, "****\n");
      fclose(fptr);
   }
   return 0;
}