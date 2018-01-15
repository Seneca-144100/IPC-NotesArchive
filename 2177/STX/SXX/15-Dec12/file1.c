#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  FILE* fptr = fopen("hello.txt", "w");
  fprintf(fptr, "Hello\nthere!\n--------\n");
  fclose(fptr);
  return 0;
}