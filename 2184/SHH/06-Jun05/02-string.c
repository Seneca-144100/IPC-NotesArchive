#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char name[20] = { 'F', 'a', 'r', 'd', 'a', 'd' };
  int i = 0;
  while (name[i] != 0) {
    printf("%c", name[i]);
    i++;
  }
  printf("\n");
  return 0;
}