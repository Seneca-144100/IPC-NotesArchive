#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printInts(const int arrayToPrint[], int arraySize);
void readInts(int arrayToRead[], int arraySize);
int main(void) {
  int a[5] = { 10, 20, 30, 40, 50 };
  printf("Marks before data entry:\n");
  printInts(a, 5);
  printf("Enter the marks:\n");
  readInts(a, 5);
  printf("Marks after data entry:\n");
  printInts(a, 5);
  return 0;
}
void readInts(int c[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d of %d: ", i + 1, size);
    scanf("%d", &c[i]);
  }
}

void printInts(const int b[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", b[i]);
    // b[i] = 0;  const will prevent this!
  }
  putchar('\n');
}