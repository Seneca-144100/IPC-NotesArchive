#include <stdio.h>
#include <string.h>
int main(){
   char str[101];
   char ch;
   int len;
   FILE* fp = fopen("text.txt", "r");
   printf("***");
   while (!feof(fp)){
      fgets(str, 100, fp);
      if ((len = strlen(str)) > 0){
         str[len - 1] = 0;
         printf("%s\n", str);
      }
   }
   printf("***\n");
   fclose(fp);
   return 0;
}