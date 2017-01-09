#include <stdio.h>
int main(void) {
   FILE *fptr;
   int num  = 0;
   int res = 1;
   fptr = fopen("data.txt", "r");
   if (!fptr) {
      printf("file does not exist!\n");
   }
   else {
      while (res == 1) {
         res = fscanf(fptr, "%d", &num);
         if(res == 1) printf("%d\n", num);
      }
      fclose(fptr);
   }
   return 0;
}