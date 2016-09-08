#include <stdio.h>
int main(){
   char ch;
   FILE* fp = fopen("words.txt", "r");
   printf("***");
   while (!feof(fp)){
      ch = fgetc(fp);
      putchar(ch);
      // printf("  %d\n", ch); debugging
   }
   printf("***\n");
   fclose(fp);
   return 0;
}