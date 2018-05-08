#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  char name[40][61];
  int junk;
  double djunk;
  int i=0;
  int j;
  FILE *fptr;
  fptr = fopen("items.txt", "r");
  while (fscanf(fptr, "%d,%[^,],%lf,%d\n", &junk, name[i], &djunk, &junk) == 4) {
    i++;
  }
  for (j = 0; j < i; j++) {
    printf("%s,", name[j]);
  }
  printf("%s\n", name[j]);
  fclose(fptr);
  return 0;
}