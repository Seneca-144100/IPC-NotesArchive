
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
//void printInts(const int p[], int size) {
void printInts(const int*  p , int size) {
    int i;
  for (i = 0; i < size; i++) {
    printf("%d ", p[i]);
  }
  printf("\n");
}
void readInts(int p[], int size) {
  int i;
  printf("Enter %d integers: ", size);
  for (i = 0; i < size; i++) {
    p[i] = getInt();
  }
}

int main(void) {
  int ar[5] = { 10, 20, 30, 40, 50 };
  int abc[7] = { 100,200,300,400,500,600,700 };
  printInts(ar, 5);
  printInts(abc, 7);
  readInts(ar, 5);
  printf("you entered the following: \n");
  printInts(ar, 5);
  return 0;
}















