#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void StrCpy(char des[], char src[]) {
  int i;
  for (i = 0; src[i] != 0 ; i++) {
    des[i] = src[i];
  }
  des[i] = 0;
}
int main(void) {
  char name[51] = "abcdefghijklmnopqrstuvwxyz";
  char str[100] = "abcdefghijklmnopqrstuvwxyz";
  printf("name contains %s initialy!\n", name);
  printf("What is your name: ");
  scanf("%50[^\n]", name);
  printf("Hello %s, how are you?\n", name);
  StrCpy(str, name);
  printf("Copy of %s is %s\n", name, str);
  return 0;
}