#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Item {
  double price;
  int qty;
  int sku;
  int minQty;
  char taxed; // 'y' or 'n'
  char name[131];
};
int main(void) {
  struct Item I;
  struct Item Inv[4000];
  Inv[504].sku = 12345;
  scanf("%d", &Inv[504].sku);
  return 0;
}