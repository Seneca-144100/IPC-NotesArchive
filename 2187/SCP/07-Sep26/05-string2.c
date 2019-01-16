#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
  char name[40] = "Fred"; // = {"F', 'r', 'e', 'd'};
  int i=0;
  while (name[i] != 0) { // (name[i] != NULL)
    printf("%c", name[i++]);
  }
  printf("\n");
  return 0;

}

