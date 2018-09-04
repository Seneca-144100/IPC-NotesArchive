#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char ch = 65;
  printf("ch1: %c  ch1 ascii code: %d\n", ch, ch);
  ch += 10; // ch = ch + 10;
  printf("ch1: %c  ch1 ascii code: %d\n", ch, ch);
  ch += ('a' - 'A');
  printf("ch1: %c  ch1 ascii code: %d\n", ch, ch);
  return 0;
}