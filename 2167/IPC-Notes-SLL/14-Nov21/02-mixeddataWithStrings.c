#include <stdio.h>
int main(void) {
   FILE* infptr;
   FILE* outfptr;
   int num  = 0;
   double val = 0.0;
   char name[51];
   infptr = fopen("mixeddata.txt", "r");
   outfptr = fopen("mixeddataout.txt", "w");
   if (!(infptr && outfptr)) {
      printf("file does not exist or could not create!\n");
   }
   else {
      while (fscanf(infptr, "%d,%[^,],%lf", &num, name, &val) == 3) {
         printf("%d,%.3lf: %s\n", num,val, name);
         fprintf(outfptr, "%s- %d,%.2lf\n",name, num, val);
      }
   }
   if(infptr) fclose(infptr);
   if(outfptr) fclose(outfptr);
   return 0;
}