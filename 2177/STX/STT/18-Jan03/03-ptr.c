#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printInts(const int* values, int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", values[i]);
  }

}
int main(void) {
  int vals[5] = { 2, 4, 3, 5, 6 };
  printInts(vals, 5);
  return 0;
}