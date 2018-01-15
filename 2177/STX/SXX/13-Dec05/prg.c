#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void StrCpy(char des[], char src[]) {
  int i;
  for (i = 0; src[i] != 0   ; i++) {
    des[i] = src[i];
  }
  des[i] = 0;
}

int main(void) {
  char name[41] = "abcdefghijklmnopqrstuvwxyz";
  char temp[100] = "abcdefghijklmnopqrstuvwxyz";
  printf("What is you name? ");
  scanf("%[^\n]", name);
  printf("Hello %s, how are you?\n", name);
  StrCpy(temp, name);
  printf("%s is copied as %s\n", name, temp);
  return 0;
}