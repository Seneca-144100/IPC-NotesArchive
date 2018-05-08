#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
//  char name[41] = { 'f', 'a', 'r', 'd', 'a', 'd' };
  char name[41] = "fardad";
  int i;
  for (i = 0;  name[i] != 0; i++) {
    printf("%c", name[i]);
  }
  printf("\n");
  printf("%s\n", name);
  return 0;
}