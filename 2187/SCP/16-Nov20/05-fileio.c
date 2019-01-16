#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
   char sfile[128];
   char dfile[128];
   FILE* fin;
   FILE* fout;
   int ch;
   printf("Enter source filename: ");
   scanf("%s", sfile);
   printf("Enter Destination filename: ");
   scanf("%s", dfile);
   fin = fopen(sfile, "r");
   if (!fin) {
      printf("file %s not found!\n", sfile);
   }
   else {
      fout = fopen(dfile, "w");
      if (!fout) {
         printf("could not open %s for writing", dfile);
         fclose(fin);
      }
      else {
         // good to go form copying
         do {
            ch = fgetc(fin);
            if (ch != EOF) {
               fputc(ch, fout);
            }
         } while (ch != EOF);
         fclose(fout);
         fclose(fin);
      }
   }
   return 0;
}

