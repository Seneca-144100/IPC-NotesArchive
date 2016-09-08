#include <stdio.h>
struct Item{
   char name[21];
   int upc;
   double price;
   int isTaxed;
};

int main(){
   struct Item A;
   struct Item B = { "Soft Kleenex", 386, 45.67, 1 };
   struct Item prd[10] = { 
      { "Soft Kleenex1", 1386, 145.67, 1 },
      { "Soft Kleenex2", 2386, 245.67, 0 },
      { "Soft Kleenex3", 3386, 345.67, 1 },
      { "Soft Kleenex4", 4386, 445.67, 0 },
      { "Soft Kleenex5", 5386, 545.67, 1 } };
   strcpy(A.name, "Fresh Fish");
   A.upc = 275;
   A.price = 12.34;
   A.isTaxed = 0;
   printf("%s", prd[2].name);
}