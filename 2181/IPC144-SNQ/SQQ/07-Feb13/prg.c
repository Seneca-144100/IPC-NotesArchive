#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char abc[41] = "abcdefghijklmnopqrstuvwxyz";
  abc[10] = 0;
  printf("%s\n", abc);
  return 0;
}