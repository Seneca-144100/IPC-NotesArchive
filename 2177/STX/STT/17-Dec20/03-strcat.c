#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "utilities.h"

int main(void) {
  char str1[41];
  char str2[82];
  printf("Enter a string value: ");
  scanf("%40[^\n]", str1);
  flushKeyboard();
  printf("Enter another string value: ");
  scanf("%40[^\n]", str2);
  flushKeyboard();
  strcat(str2, " ");
  strcat(str2, str1);
  printf("The concat of the two strings is: %s\n", str2);
  return 0;
}