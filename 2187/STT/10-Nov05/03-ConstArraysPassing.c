#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
void prnInts(const int values[], int size);
int main(void) {
   int a[5] = { 10, 20, 30, 40, 50 };
   prnInts(a, 5);
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
