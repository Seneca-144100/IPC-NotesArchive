#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
int main(void) {
   char name[5][41] = { "Jill", "Jack", "John", "Jane", "Joe" };
   int i;
   for (i = 0; i < 5; i++) {
      printf("%s\n", name[i]);
   }

   for (i = 0; i < 5; i++) {
      printf("Enter name number %d:", i+1 );
      getStr(name[i], 40);
   }
   for (i = 0; i < 5; i++) {
      printf("%s\n", name[i]);
   }

   return 0;
}