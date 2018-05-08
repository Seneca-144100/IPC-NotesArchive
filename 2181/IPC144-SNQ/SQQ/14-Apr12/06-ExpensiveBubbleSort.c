#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void printItems(const int s[],const char nm[][61], int num) {
  int j;
  for (j = 0; j < num; j++) {
    printf("%3d - %s\n", s[j], nm[j]);
  }
}
void sortItemsSku(int s[], char nm[][61], int num) {
  int i;
  int j;
  int itemp;
  char stemp[61];
  for (i = 0; i < num - 1; i++) {
    for (j = 0; j < num - i - 1; j++) {
      if (s[j] > s[j + 1]) {
        // swap
        itemp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = itemp;
        strcpy(stemp, nm[j]);
        strcpy(nm[j], nm[j + 1]);
        strcpy(nm[j + 1], stemp);
      }
    }
  }
}
 int main(void) {
    char name[40][61];
    int sku[40];
    int junk;
    double djunk;
    int i = 0;
    int j;
    FILE *fptr;
    fptr = fopen("items.txt", "r");
    for (i = 0; fscanf(fptr, "%d,%[^,],%lf,%d\n", &sku[i], name[i], &djunk, &junk) == 4; i++);
    fclose(fptr);
    printItems(sku, name, i);
    printf("----------------\n");
    sortItemsSku(sku, name, i);
    printItems(sku, name, i);
    return 0;
}