#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
//  char zero = 48;
  const char zero = '0';
  char ch = zero;
  printf("%d %c\n", zero, zero);
  ch += 6;
  printf("%d %c\n", ch, ch);
  ch += 6;
  printf("%d %c\n", ch, ch);
  ch += 6;
  printf("%d %c\n", ch, ch);
  return 0;
}