#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "utilities.h"
/*
the function to compare is strcmp(const char* leftStr, const char* rightStr);
leftStr < rightStr ===>    strcmp(leftStr,rightStr) < 0
leftStr == rightStr ===>    strcmp(leftStr,rightStr) == 0
leftStr > rightStr ===>    strcmp(leftStr,rightStr) > 0
*/
int main(void) {
  char str1[41];
  char str2[82];
  do {
    printf("Enter a string value: ");
    scanf("%40[^\n]", str1);
    flushKeyboard();
    printf("Enter another string value: ");
    scanf("%40[^\n]", str2);
    flushKeyboard();
    if (strcmp(str1, str2) > 0) {
      printf("%s > %s\n", str1, str2);
    }
    else if (strcmp(str1, str2) == 0) {
      printf("%s == %s\n", str1, str2);
    }
    else if (strcmp(str1, str2) < 0) {
      printf("%s < %s\n", str1, str2);
    }
    printf("Test another? (y/n): ");
  } while (yes());
  return 0;
}