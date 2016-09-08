#include <stdio.h>
int main(){
   char name[81];
   int i = 1;
   FILE* fptr = fopen("names.txt", "r");
   while (fscanf(fptr, "%80[^,],", name) == 1){
      printf("%d- %s\n", i++, name);
   }
   fclose(fptr);
   return 0;
}