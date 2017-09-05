
#include <stdio.h>

int main(void){
   char text[2000];
   FILE* helloFile;
   int n;
   /* helloFile = fopen("hello.txt", "w");
   fprintf(helloFile, "Hello there!\nThe program is running!\n");
   fclose(helloFile);*/
   helloFile = fopen("hello.txt", "r");
   n = fscanf(helloFile, "%s", text);
   printf("%s\n", text);
   printf("n: %d\n", n);
   return 0;
}