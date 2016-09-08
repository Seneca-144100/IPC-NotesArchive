#include <stdio.h>
int main(){
   char str[101];
   FILE* fp = fopen("text.txt", "r");
   while (!feof(fp)){
      fscanf(fp,"%s", str);
      printf("%s\n", str);
   }
   printf("***\n");
   rewind(fp);
   fscanf(fp, "%s", str);
   printf("%s\n", str);
   fclose(fp);
   return 0;
}