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
   int i;
   char upper[80];
   char name[21] = "fardad!";
   str2up(upper, name);
   srand(time(NULL));
   printf("%s\n", upper);
   for (i = 0;i < 20;i++) {
      printf("%d - %d\n", rand()%6 + 1, rand() % 6 + 1);
   }

   return 0;
}