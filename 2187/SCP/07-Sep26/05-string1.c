#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
  char name[40];
  int i=0;
  name[0] = 'F';
  name[1] = 'r';
  name[2] = 'e';
  name[3] = 'd';
  name[4] = 0;
  while (name[i] != 0) { // (name[i] != NULL)
    printf("%c", name[i++]);
  }
  printf("\n");
  return 0;

}

