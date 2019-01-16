#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
  char name[40] = "Fred"; // = {"F', 'r', 'e', 'd'};
  int i=0;
  printf("My name is: %s\n", name);
  return 0;

}

