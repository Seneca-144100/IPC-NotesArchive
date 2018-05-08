#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
//  char a[10] = { 'F','r','e','d' };
  char a[10] = "Fred";
  int i;
  for (i = 0; a[i] != NULL; i++) {
    putchar(a[i]);
  }
  putchar('\n');


  printf("%s\n", a);
  return 0;
}