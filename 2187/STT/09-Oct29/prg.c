#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnInts(const int arr[], int size);
void addOnes(int arr[], int size);
int main(void) {
  int vals[5] = { 1,4,6,12,7 };
  int marks[10] = {44,65,78,34,56,89,78,67,45,34};
  prnInts(vals, 5);
  prnInts(marks, 10);
  addOnes(marks, 10);
  prnInts(marks, 10);
  return 0;
}

void addOnes(int A[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    A[i]++;
  }
}
void prnInts(const int A[],int size) {
  int i;
  for (i = 0; i < size ; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

