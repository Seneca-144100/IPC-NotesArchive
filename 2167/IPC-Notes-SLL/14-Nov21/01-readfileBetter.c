#include <stdio.h>
int main(void) {
   FILE *fptr;
   int num  = 0;
   fptr = fopen("data.txt", "r");
   if (!fptr) {
      printf("file does not exist!\n");
   }
   else {
      while (fscanf(fptr, "%d", &num) == 1) {
         printf("%d\n", num);
      }
      fclose(fptr);
   }
   return 0;
}