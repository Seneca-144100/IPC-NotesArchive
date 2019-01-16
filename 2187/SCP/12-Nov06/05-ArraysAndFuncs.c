#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
void prnMarks(const int theMarks[], int size);
void getMarks(int theMarks[], int size);
int main(void) {
   int marks[35] = { 55, 89, 76 };
   getMarks(marks, 4);
   prnMarks(marks, 4);
   return 0;
}
void getMarks(int m[], int size) {
   int i;
   printf("Please enter %d marks:\n", size);
   for (i = 0; i < size; i++) {
      printf("mark %d of %d: ",i+1, size );
      m[i] = getLimitedInt(0, 100);
   }
}
void prnMarks(const int mrk[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", mrk[i]);
   }
   putchar('\n');
}



