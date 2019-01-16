#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
int main(void) {
   char name[5][41] = { "William", "Joe", "Soleimanloo", "Jane", "Muhammad" };
   int i;
   int j;
   for (i = 0; i < 5; i++) {
      printf("%s\n", name[i]);
   }
   for (i = 0; i < 5; i++) {
      printf("%c%c\n", name[i][0], name[i][1]);
   }   
   for (i = 0; i < 5; i++) {
 //   for (j = 0; name[i][j] != NULL && j < 5; j++) {
      for (j = 0; name[i][j] && j < 5; j++) {
            printf("%c", name[i][j]);
      }
      printf("\n");
   }

   return 0;
}