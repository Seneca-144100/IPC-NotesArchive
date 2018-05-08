/*
This program sorts the data read from the file without rearranging the array of data.
Instead it will have several arrays of pointers pointed to the individual array elements
and rearrange the pointers.
Hence the massive amount of data read from the file remains untouched and the program runs
Much faster.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SORT_BY_SKU (1)
#define SORT_BY_NAME (0)

struct Product {
  int sku;
  double price;
  char name[41];
  int taxed;
};
int readProuct(FILE* inputFile, struct Product* p) {
  return fscanf(inputFile, "%d,%[^,],%lf,%d\n", &p->sku, p->name, &p->price, &p->taxed) == 4;
}

void printProduct(const struct Product* prd, int row) {
  printf(" %-5.3d | %-5d | %-40s | %6.2lf | %s\n", row, prd->sku, prd->name, prd->price, prd->taxed ? "Yes" : "No");
}
void printTitle(void) {
  printf(" row   | sku   |    Name                                  |Price   | Taxed\n");
  printf("-------+-------+------------------------------------------+--------|------\n");

}
void printProducts(const struct Product* prdPtrs[], int size) {
  int i;
  printTitle();
  for (i = 0; i < size; i++) {
    printProduct(prdPtrs[i], i + 1);
  }
  printf("-------------------------------------------------------------------------\n");
}












void SortBy(struct Product* prdStructPointers[], int size, int SortyBySKU) {
  int i;
  int j;
  struct Product* temp;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (SortyBySKU == SORT_BY_SKU) {
        if (prdStructPointers[j]->sku > prdStructPointers[j + 1]->sku) {
          temp = prdStructPointers[j];                     // only swaps pointers, pointing to Product elements and not the elements themselves
          prdStructPointers[j] = prdStructPointers[j + 1];
          prdStructPointers[j + 1] = temp;
        }
      }
      else { //sort by name
        if (strcmp(prdStructPointers[j]->name, prdStructPointers[j + 1]->name) > 0) {
          temp = prdStructPointers[j];                  // only swaps pointers, pointing to Product elements and not the elements themselves
          prdStructPointers[j] = prdStructPointers[j + 1];
          prdStructPointers[j + 1] = temp;
        }
      }
    }
  }
}
void pause(void) {
  printf("Press <ENTER> to continue...");
  while (getchar() != '\n');
}

int main(void) {
  struct Product prd[100];
  struct Product* bySku[100];
  struct Product* byName[100];
  struct Product* unSorted[100];
  FILE* datafile;
  datafile = fopen("items.txt", "r");
  if (datafile == NULL) {
    printf("could not open items.txt file!\n");
  }
  else {
    int num = 0;
    while (readProuct(datafile, &prd[num])) { // reading the products and set each "sort" pointer pointing to individual elements of the Products array
      unSorted[num] = byName[num] = bySku[num] = &prd[num];
      num++;
    }
    fclose(datafile);
    SortBy(bySku, num, SORT_BY_SKU);
    SortBy(byName, num, SORT_BY_NAME);
    printf("Products unsorted: \n");
    printProducts(unSorted, num);
    pause();
    printf("Products sorted by sku: \n");
    printProducts(bySku, num);
    pause();
    printf("Products sorted by name: \n");
    printProducts(byName, num);
  }
  return 0;
}