#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
void setArray(int ar[]) {
  int i;
  for (i = 0; i < 5; i++) {
    ar[i] = i * 10;
  }
}

void prnIntValues(const int vals[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", vals[i]);
  }
  printf("\n");
}

int main(void) {
  int nums[10] = { 123,234,345,456,567,678,789,890,987,999 };
  int nums2[5] = { 1,2,3,4,5 };
  prnIntValues(nums, 10);
  prnIntValues(nums2, 5);
  setArray(nums);
  setArray(nums2);
  prnIntValues(nums, 10);
  prnIntValues(nums2, 5);

  return 0;
}