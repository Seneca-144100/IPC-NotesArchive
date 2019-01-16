#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void prnInts(const int a[], int asize) {
   int i;
   for (i = 0; i < asize; i++) {
      printf("%d ", a[i]);
   }
   printf("\n============================\n");
}

void sortInts(int a[], int size) {
   int i;
   int j;
   int temp;
   for (i = 0; i < size - 1; i++) {
      for (j = 0; j < size - 1 - i; j++) {
         if (a[j] > a[j + 1]) {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
   }
}


void sortStrings(char str[][41], int size) {
   int i;
   int j;
   char temp[41];
   for (i = 0; i < size - 1; i++) {
      for (j = 0; j < size - 1 - i; j++) {
         if (strcmp(str[j], str[j+1]) > 0) {
            strcpy(temp,str[j]);
            strcpy(str[j] , str[j + 1]);
            strcpy(str[j + 1] , temp);
         }
      }
   }
}


void prnNames(const char n[][41], int noOfNames) {
   int i;
   for (i = 0; i < noOfNames; i++) {
      printf("%s\n", n[i]);
   }
}

int main(void) {
   char name[5][41] = { "Fred", "Joe", "Marylynn", "Frank", "Peter" };
   int a[5] = { 8,5,3,1,2 };

   prnInts(a, 5);
   sortInts(a, 5);
   prnInts(a, 5);
   prnNames(name, 5);
   sortStrings(name, 5);
   printf("========================================\n");
   prnNames(name, 5);
   return 0;
}