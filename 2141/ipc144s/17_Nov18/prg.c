#include <stdio.h>
#include <string.h>
int main(){
   char str[101];
   char ch;
   int len;
   FILE* fp = fopen("text.txt", "r");
   printf("***");
   while (!feof(fp)){
      printf(fgets(str, 100, fp)?str:"");
   }
   printf("***\n");
   rewind(fp);
   printf(fgets(str, 100, fp) ? str : "");
   fclose(fp);
   return 0;
}