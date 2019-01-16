#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void skipBadData(FILE* f, int NoOfFields, int* resptr) {
   int ch;
   do {
      ch = fgetc(f);
   } while (ch != EOF && ch != '\n');
   if (ch != EOF) {
      *resptr = NoOfFields;
   }
}

void header(void) {
   printf(" Name               |W |L |H |Wght\n");
   printf("====================+==+==+==+====\n");
}
int main(void) {
   FILE* fptr;
   char name[21] = "Empty";
   int width = -1;
   int length = -1;
   int height = -1;
   double weight = -1;
   int res;
   int ch;
   fptr = fopen("package.txt", "r");
   if (fptr == NULL) {
      printf("Failed to open the file\n");
   }
   else {  
      header();
      do {  //start a loop
         res = fscanf(fptr, "%[^,],%d,%d,%d,%lf\n", name, &width, &length, &height, &weight);  //read data
         if (res >= 0 && res <5) {    // bad data, scanf failed
            skipBadData(fptr, 5, &res);
            printf("bad file, fix the format\n");
         }
         else if (res == EOF) {  // if end of file
            printf("End of file reached!\n");
         }
         else {  // everything, ok, process the data
            printf("%-20s|%2d|%2d|%2d|%4.1lf\n", name, width, length, height, weight);
         }
      } while (res == 5);
      fclose(fptr);
   }
   return 0;
}