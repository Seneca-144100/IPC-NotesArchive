#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printInts(int arrayToPrint[],int arraySize);

int main(void) {
  int a[5] = { 10, 20, 30, 40, 50 };
  int x[7] = { 100, 200, 300, 400, 500, 600, 700 };
  printInts(a, 5);
  printInts(x, 7);
  return 0;
}

void printInts(int b[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", b[i]);
  }
  putchar('\n');
}