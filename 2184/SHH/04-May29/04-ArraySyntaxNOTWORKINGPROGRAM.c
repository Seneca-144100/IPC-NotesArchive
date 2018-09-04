#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  // type name[howMany];
  int mark[100] = { 10, 20 };  // first two initialized to 10 AND 20 and the rest to 0
  double price[4] = { 1.1, 2.2, 3.3, 4.4 };
  char letters[200];
  short num[100000] = { 0 };  // all elements set to zero;
  int i;
  i = 0;
  while (i < 100) {
    printf("%d ", mark[i]);
    i++;
  }
  return 0;
}