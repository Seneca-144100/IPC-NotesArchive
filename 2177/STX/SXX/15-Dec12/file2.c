#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  char str[101];
  FILE* fptr = fopen("hello.txt", "r");
  fscanf(fptr, "%s", str);
  fclose(fptr);
  printf("%s\n", str);
  return 0;
}