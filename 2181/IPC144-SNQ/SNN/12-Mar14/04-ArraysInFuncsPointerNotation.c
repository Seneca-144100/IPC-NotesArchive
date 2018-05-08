#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printInts(const char* title, const int* arrayToPrint, int arraySize);
void readInts(const char* prompt, int* arrayToRead, int arraySize);
int main(void) {
  int a[5] = { 10, 20, 30, 40, 50 };
  printInts("Marks before data entry:\n", a, 5);
  readInts("Enter the marks:\n", a, 5);
  printInts("Marks after data entry:\n", a, 5);
  return 0;
}

void readInts(const char* prompt, int* c, int size) {
  int i;
  printf(prompt);
  for (i = 0; i < size; i++) {
    printf("%d of %d: ", i + 1, size);
    scanf("%d", &c[i]);
  }
}
void printInts(const char* title, const int* b, int size) {
  int i;
  printf(title);
  for (i = 0; i < size; i++) {
    printf("%d ", b[i]);
    // b[i] = 0;  const will prevent this!!!!
  }
  putchar('\n');
}