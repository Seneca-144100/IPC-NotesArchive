#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
   int num;
   int res;
   FILE* fptr;
   fptr = fopen("nums.txt", "r");
   if (fptr == NULL) {
      printf("Failed to open the file\n");
   }
   else {
      do {  //start a loop
         res = fscanf(fptr, "%d", &num);  //read data
         if (res == 0) {  // if bad data (scanf could not read all the field)
            printf("bad file, fix the format!\nthe last successful read was %d\n", num);
         }
         else if (res == EOF) {  // if end of file
            printf("End of file reached!");
         }
         else {  // everything, ok, so print
            printf("%d\n", num);
         }
      } while (res == 1);
      fclose(fptr);
   }
   return 0;
}