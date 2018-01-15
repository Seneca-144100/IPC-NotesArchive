#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct ItemPrice {
  int sku;
  double price;
  char name[41];
};

int main(void) {
  // int sku[10];
  // double price[10];
  // instead of the parallel arrays above, one structure
  // is created and one array of the structure to replace all 
  // all the parallel arrays. 
  struct ItemPrice items[10];
  struct ItemPrice I;

  // accessing sturcture properties. 
  scanf("%s", I.name);
  scanf("%d", &I.sku);
  scanf("%lf", &I.price);

  scanf("%s", items[2].name);
  scanf("%d", &items[2].sku);
  scanf("%lf", &items[2].price);

  items[6].price = 234.56;

  return 0;
}