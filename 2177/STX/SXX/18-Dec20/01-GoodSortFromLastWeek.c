#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include "utilities.h"
#define MAX_NUMS 500

void sort(int nums[], int size, int ascending);
int getInts(int nums[]);
void prnInts(const int* nums, int size);
void swap(int* one, int* two);


int isAscending(void);

int main(void) {
  int numbers[MAX_NUMS];
  int cnt = getInts(numbers);
  sort(numbers, cnt , isAscending());
  prnInts(numbers, cnt);
  return 0;
}

int isAscending(void) {
  int cnt;
  printf("Please enter 1 for Ascending and 0 for Desending sort: ");
  cnt = getLimitedInt(0, 1);
  return cnt;
}

void sort(int nums[], int size, int ascending) {
  int i;
  int j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - 1 - i; j++) {
      if (ascending) {
        if (nums[j] > nums[j + 1]) {
          swap(&nums[j], &nums[j + 1]);
        }
      }
      else {
        if (nums[j] < nums[j + 1]) {
          swap(&nums[j], &nums[j + 1]);
        }
      }
    }
  }
}

int getInts(int nums[]) {
  int cnt;
  int i;
  printf("Please enter the number of integer values: ");
  cnt = getLimitedInt(2, MAX_NUMS);
  for (i = 0; i < cnt; i++) {
    printf("%03d> ", i + 1);
    nums[i] = getInt();
  }
  return cnt;
}
void prnInts(const int* nums, int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d", nums[i]);
    if (i != size - 1) {
      printf(", ");
    }
  }
  printf("\n");
}

void swap(int* first, int* second) {
  int temp = *first;
  *first = *second;
  *second = temp;
}