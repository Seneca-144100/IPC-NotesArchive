// this is a very cryptic way to continue the search reusing the function
// we wrote that only finds the first occurrence. 
// walk through this for better understanding of pointers and arrays and
// also structures

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct Product {
  int sku;
  double price;
  char name[41];
};
int readProuct(FILE* inputFile, struct Product* p) {
  return fscanf(inputFile, "%d,%[^,],%lf\n", &p->sku, p->name, &p->price) == 3;
}
int searchProduct(const struct Product* prd, const char* name, int size) {
  int i;
  int foundIndex = -1;
  for (i = 0; foundIndex == -1 && i < size; i++) {
    if (strstr(prd[i].name, name)) {
      foundIndex = i;
    }
  }
  return foundIndex;
}
void printProduct(const struct Product* prd) {
  printf("%6d | %-40s | %6.2lf\n", prd->sku, prd->name, prd->price);
}
void printTitle(void) {
  printf("sku    |    Name                                  |Price\n");
  printf("-------+------------------------------------------+-------\n");

}
int main(void) {
  struct Product prd[1000];
  char name[41];
  FILE* datafile;
  datafile = fopen("data.txt", "r");

  if (datafile == NULL) {
    printf("could not open data.txt file!\n");
  }
  else {
    int num = 0;
    int index;
    const struct Product* searchFrom = prd; // start the search from the beginning
    while (readProuct(datafile, &prd[num])) num++;  // read all products;
    fclose(datafile);
    printf("Enter partial name of a product to search for: ");
    scanf("%[^\n]", name);
    printTitle();
    do {
      index = searchProduct(searchFrom, name, num);
      if (index != -1) {
        printProduct(&searchFrom[index]);
        searchFrom = &searchFrom[index + 1]; // set the next search to strat from the next element
        num -= (index + 1); // reduce the number of elements for next search  
      }
      else {
        printf("End of search!\n");
      }
    } while (index != -1);
  }
  return 0;
}