#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
  FILE* fptr = fopen("myfile.txt", "w"); // "w"  "r"  "w+" "r+"  "a"
  if (fptr == NULL) {
    fprintf(stderr, "could not open file!\n");
  }
  else {
    fprintf(fptr, "Hello there!\n");
    fclose(fptr);
  }
  return 0;
}