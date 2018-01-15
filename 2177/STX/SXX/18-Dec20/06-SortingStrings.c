#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
#define MAX_NUMS (500)

int getStrings(char str[][41]) {
  int cnt;
  int i;
  printf("Enter the number of strings: ");
  cnt = getLimitedInt(2, MAX_NUMS);
  for (i = 0; i < cnt; i++) {
    printf("%03d> ", i + 1);
    scanf("%40[^\n]", str[i]);
    flushKeyboard();
  }
  return cnt;
}
//void printStrings(const int nums[], int cnt) {
void printStrings(const char str[][41], int cnt) { // 1, 45, 67, 45 
  int i;                                        // 0   1   2   3
  for (i = 0; i < cnt; i++) {
    printf("%s\n", str[i]);
  }
}
void swap(char* first, char* second) {
  char temp[41];
//  int temp = *first;
  strcpy(temp, first);
  *first = *second;
  strcpy(first, second);
//  *second = temp;
  strcpy(second, temp);
}
void sortStrings(char str[][41], int cnt, int ascending) {
  int i; // outer loop counter
  int j; // inner loop counter
  for (i = 0; i < cnt - 1; i++) {
    for (j = 0; j < cnt - 1 - i; j++) {
      if (ascending) {
//        if (nums[j] > nums[j + 1]) { converted to string compare
        if (strcmp(str[j], str[j + 1]) > 0) {
            swap(str[j], str[j + 1]);
        }
      }
      else {
//        if (nums[j] < nums[j + 1]) {
        if(strcmp(str[j], str[j + 1])< 0) {
            swap(str[j], str[j + 1]);
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
  char str[MAX_NUMS][41];
  int cnt = getStrings(str);
  sortStrings(str, cnt, getSortDirection());
  printStrings(str, cnt);
  return 0;
}