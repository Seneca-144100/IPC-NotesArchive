#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
#define MAX_NUMS (500)

int getIntValues(int nums[]) {
  int cnt;
  int i;
  printf("Enter the number of integers: ");
  cnt = getLimitedInt(2, MAX_NUMS);
  for (i = 0; i < cnt; i++) {
    printf("%03d> ", i + 1);
    nums[i] = getInt();
  }
  return cnt;
}
//void printIntValues(const int nums[], int cnt) {
void printIntValues(const int* nums, int cnt) { // 1, 45, 67, 45 
  int i;                                        // 0   1   2   3
  for (i = 0; i < cnt; i++) {
    printf("%d", nums[i]);
    if (i < cnt - 1) printf(", ");
  }
  putchar('\n');
}
void swap(int* first, int* second) {
  int temp = *first;
  *first = *second;
  *second = temp;
}
void sortInts(int nums[], int cnt, int ascending) {
  int i; // outer loop counter
  int j; // inner loop counter
  for (i = 0; i < cnt - 1; i++) {
    for (j = 0; j < cnt - 1 - i; j++) {
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
int getSortDirection() {
  printf("Please enter the direction of sort, (Ascending: 1, Desending: 0): ");
  return getLimitedInt(0, 1);
}
int main(void) {
  int numbers[MAX_NUMS];
  int cnt;
  sortInts(numbers, cnt = getIntValues(numbers), getSortDirection() );
  printIntValues(numbers, cnt);
  return 0;
}