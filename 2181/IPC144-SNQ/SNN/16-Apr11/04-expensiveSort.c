#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void printItems(const int s[], const char nm[][61], int num) {
  int j;
  for (j = 0; j < num; j++) {
    printf("%3d - %s\n", s[j], nm[j]);
  }
}
void sortItemsSku(int s[], char nm[][61], int num) {
  int n;
  char str[61];
  int i;
  int j;
  for (j = 0; j < num - 1; j++) {
    for (i = 0; i < num - j -1 ; i++) {
      if (s[i] > s[i+1]) {
        n = s[i];
        s[i] = s[i + 1];
        s[i + 1] = n;
        strcpy(str, nm[i]);
        strcpy(nm[i], nm[i + 1]);
        strcpy(nm[i + 1], str);
      }
    }
  }
}

int main(void) {
  char name[40][61];
  int sku[40];
  int junk;
  double djunk;
  int i=0;
  int j;
  FILE *fptr;
  fptr = fopen("items.txt", "r");
  for (i = 0; fscanf(fptr, "%d,%[^,],%lf,%d\n", &sku[i], name[i], &djunk, &junk) == 4; i++);
  fclose(fptr);
  printItems(sku, name, i);
  sortItemsSku(sku, name, i);
  printf("----------------------\n");
  printItems(sku, name, i);
  return 0;
}