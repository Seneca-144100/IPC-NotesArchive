#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Product {
  int sku;
  double price;
  char name[41];
};
int readProduct(FILE* inputFile, struct Product* p) {
  return fscanf(inputFile, "%d,%[^,],%lf\n", &p->sku, p->name, &p->price) == 3;
}
void printTitle(void) {
  printf("sku    |    Name                                  |Price\n");
  printf("-------+------------------------------------------+-------\n");
}
void printProduct(const struct Product* prd) {
  printf("%6d | %-40s | %6.2lf\n", prd->sku, prd->name, prd->price);
}
int searchProduct(const struct Product prd[], const char* name, int size) {
  int i;
  int foundIndex = -1;
  for (i = 0; foundIndex == -1 && i < size; i++) {
    if (strstr(prd[i].name, name)) {
      foundIndex = i;
    }
  }
  return foundIndex;
}
int main(void) {
  struct Product prd[1000];
  FILE* datafile;
  datafile = fopen("data.txt", "r");
  if (datafile == NULL) {
    printf("could not open data.txt file!\n");
  }
  else {
    int num = 0;
    int index;    
    char name[41];
    while (readProduct(datafile, &prd[num])) {
      num++;
    }
    fclose(datafile);
    printf("Enter partial name of a product to search for first occurrence in the list:\n> ");
    scanf("%[^\n]", name);
    index = searchProduct(prd, name, num);
    if (index != -1) {
      printTitle();
      printProduct(&prd[index]);
    }
    else {
      printf("No found!\n");
    }
  }
  return 0;
}
