#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
void str2up(char* res, const char* src) {
   int i;
   for (i = 0;src[i];i++) {
      res[i] = toupper(src[i]);
   }
   res[i] = 0;
}

int main() {
   FILE* fptr;
   FILE* anotherFile;
   int i;
   char upper[80];
   char name[21] = "fardad!";
   fptr = fopen("random.txt", "a");
   anotherFile = fopen("heehaw.txt", "w+");
   if (fptr == NULL || anotherFile == NULL) {
      printf("Could not open random.txt for writing\n");
   }
   else {
      int a, b;
      str2up(upper, name);
      srand(time(NULL));
      printf("%s\n", upper);
      for (i = 0;i < 20;i++) {
         fprintf(fptr, "%d - %d\n", rand() % 6 + 1, rand() % 6 + 1);
         fprintf(anotherFile, "%d %d\n", rand() % 6 + 1, rand() % 6 + 1);
      }
      fclose(fptr);
      rewind(anotherFile);
      while (fscanf(anotherFile,"%d %d", &a, &b) == 2) {
         printf("%d and %d\n", a, b);
      }
      fclose(anotherFile);
   }
   return 0;
}