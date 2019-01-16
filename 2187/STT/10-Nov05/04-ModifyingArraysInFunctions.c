#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
void prnInts(const int values[], int size);
void readInts(int values[], int size, const char prompt[]);
int main(void) {
   int a[5];
   readInts(a, 5, "Please enter the marks:\n");
   printf("The marks are:\n");
   prnInts(a, 5);
   return 0;
}
void prnInts(const int values[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", values[i]);
   }
   putchar('\n');
}
void readInts(int values[], int size, const char prompt[]) {
   int i;
   printf("%s", prompt);
   for (i = 0; i < size; i++) {
      printf("%d of %d> ", i + 1, size);
      //scanf("%d", &values[i]);
      values[i] = getInt();
   }
}