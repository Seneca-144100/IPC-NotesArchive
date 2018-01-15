#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[41];
  char str2[41];
  printf("Enter a string value: ");
  scanf("%[^\n]", str1);
  printf("You enterd: %s\n", str1);
  strcpy(str2, str1);
  printf("The copy of what entered is: %s\n", str2);
  return 0;
}