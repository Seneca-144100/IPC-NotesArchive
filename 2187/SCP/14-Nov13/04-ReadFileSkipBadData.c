#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
   int num;
   int res;
   int cnt=0;
   int max;
   int ch;
   FILE* fptr;
   fptr = fopen("nums.txt", "r");
   if (fptr == NULL) {
      printf("Failed to open the file\n");
   }
   else {
      do {  //start a loop
         res = fscanf(fptr, "%d", &num);  //read data
         if (res == 0) {  // if bad data (scanf could not read all the field)
            do {
               ch = fgetc(fptr);
            } while (ch != EOF && ch != '\n');
            if (ch != EOF) {
               res = 1;
            }
            printf("bad file, fix the format!\nthe last successful read was %d\n", num);
         }
         else if (res == EOF) {  // if end of file
            printf("End of file reached!\n");
         }
         else {  // everything, ok, process the data
            cnt++;
            if (cnt == 1) {
               max = num;
            }
            else if (max < num) {
               max = num;
            }
         }
      } while (res == 1);
      printf("larget integer in file was: %d\n", max);
      fclose(fptr);
   }
   return 0;
}