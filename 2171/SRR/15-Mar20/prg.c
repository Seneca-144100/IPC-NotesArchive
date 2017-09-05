
#include <stdio.h>

int main(void){
   char src[256];
   char des[256];
   int ch;
   FILE* srcFile;
   FILE* desFile;
   printf("Enter source file: ");
   scanf("%s", src);
   while (getchar() != '\n');
   printf("Enter destination file: ");
   scanf("%s", des);
   srcFile = fopen(src, "r");
   if (srcFile == NULL) {
      printf("could not open %s\n", src);
   }
   else {
      desFile = fopen(des, "w");
      if (desFile == NULL) {
         printf("could not open %s for writing\n", des);
         fclose(srcFile);
      }
      else {
         do {
            ch = fgetc(srcFile);
            if(ch != EOF) fputc(ch, desFile);
         } while (ch != EOF);
         fclose(desFile);
         fclose(srcFile);
      }
   }

   return 0;
}