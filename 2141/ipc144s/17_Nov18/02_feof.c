#include <stdio.h>
int main(){
   char ch;
   FILE* fp = fopen("words.txt", "r");
   printf("***");
   while (!feof(fp)){
      fscanf(fp, "%c", &ch);
      putchar(ch);
   }
   printf("***\n");
   fclose(fp);
   return 0;
}