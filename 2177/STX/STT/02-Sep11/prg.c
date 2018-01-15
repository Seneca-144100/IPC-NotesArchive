#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char ch = 'X';
  printf("%d\n", 65);
  printf("%c\n", 65);
  printf("%c\n", 110);
  printf("ch: %c\n", ch);
  ch++;
  printf("ch: %c\n", ch);
  return 0;
}