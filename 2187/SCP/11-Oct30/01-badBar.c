#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bar(char filling, int length);

int main(void) {
  int values[5] = { 2, 50 , 60, 10, 15 };
  int i;
  for (i = 0; i < 5; i++) {
    bar('=', values[i]);
  }
  return 0;
}


void bar(char fill, int len) {
  int i;
  printf("%02d: ", len);
  for (i = 0; i < len; i++) {
    printf("%c", fill);
  }
  printf("\n");
}


