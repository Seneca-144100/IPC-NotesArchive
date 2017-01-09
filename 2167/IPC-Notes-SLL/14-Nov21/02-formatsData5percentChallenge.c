#include <stdio.h>
int main(void) {
   FILE* infptr;
   FILE* outfptr;
   int num  = 0;
   infptr = fopen("data.txt", "r");
   outfptr = fopen("dataout.txt", "w");
   if (!(infptr && outfptr)) {
      printf("file does not exist or could not create!\n");
   }
   else {
      while (fscanf(infptr, "%d", &num) == 1) {
         printf("%d\n", num);
         fprintf(outfptr, "%d,", num);
      }
   }
   if(infptr) fclose(infptr);
   if(outfptr) fclose(outfptr);
   return 0;
}