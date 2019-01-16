#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  char name[41] = "Fred"; // = {"F', 'r', 'e', 'd'};
  int i=0;
  printf("What is your name?\n> ");
  scanf("%40s", name);
  printf("hello: %s\n", name);
  return 0;

}

