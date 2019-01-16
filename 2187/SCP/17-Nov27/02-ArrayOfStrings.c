#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnNames(const char n[][41], int noOfNames) {
   int i;
   for (i = 0; i < noOfNames; i++) {
      printf("%s\n", n[i]);
   }
}

int main(void) {
   char name[5][41] = { "Fred", "Joe", "Marylynn", "Frank", "Peter" };
   char lastname[3][41] = { "Black", "Brown", "Soleimanloo" };
   prnNames(name, 5);
   printf("=-============================\n");
   prnNames(lastname, 3);
   printf("Please re-enter the 3rd name: ");
   scanf("%40[^\n]", name[2]);
   prnNames(name, 5);
   return 0;
}