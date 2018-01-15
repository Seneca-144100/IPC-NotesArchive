#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[41];
  char str2[41] = "abcdefghijklmnop";
  printf("Enter a string value: ");
  scanf("%[^\n]", str1);
  printf("You enterd: %s\n", str1);
  strncpy(str2, str1, 5);
  str2[5] = 0;
  printf("The copy of what entered is: %s\n", str2);
  return 0;
}