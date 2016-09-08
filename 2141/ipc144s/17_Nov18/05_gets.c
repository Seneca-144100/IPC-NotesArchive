#include <stdio.h>
#include <string.h>
int main(){
   char str[101];
   char ch;
   int len;
   FILE* fp = fopen("text.txt", "r");
   printf("***");
   while (!feof(fp)){
      fgets(str, 100, fp); // reads \n into the string
      printf("%s", str);
   }
   printf("***\n");
   fclose(fp);
   return 0;
}