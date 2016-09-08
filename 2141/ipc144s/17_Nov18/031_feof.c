#include <stdio.h>
int main(){
   char ch;
   FILE* fp = fopen("words.txt", "r");
   printf("***");
   while (!feof(fp)){
      ch = fgetc(fp);
      if (!feof(fp))
         putchar(ch);
   }
   printf("***\n");
   fclose(fp);
   return 0;
}