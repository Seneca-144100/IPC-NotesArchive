#include <stdio.h>
int main(){
   char ch;
   FILE* fp = fopen("text.txt", "r");
   while (fscanf(fp, "%c", &ch) == 1){
      putchar(ch);
   }
   fclose(fp);
   return 0;
}