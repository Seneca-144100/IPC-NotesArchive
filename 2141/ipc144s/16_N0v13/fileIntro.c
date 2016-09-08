#include <stdio.h>
#include "tools.h"
int main(){
   FILE* fptr;
   int i;
   int num;
   fptr = fopen("nums.txt", "rt");
   for (i = 0; i < 10; i++){
      fscanf(fptr, "%d", &num);
      printf("%d\n", num);
   }
   fclose(fptr);
   return 0;
}

