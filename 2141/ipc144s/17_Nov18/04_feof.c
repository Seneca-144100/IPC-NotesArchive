#include <stdio.h>
int main(){
   char ch;
   FILE* fp = fopen("words.txt", "r");
   printf("***");
   while ((ch = fgetc(fp)) != EOF){
      putchar(ch);
   }
   printf("***\n");
   fclose(fp);
   return 0;
}