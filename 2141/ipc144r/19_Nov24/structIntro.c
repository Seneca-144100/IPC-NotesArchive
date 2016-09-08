#include <stdio.h>
#include <string.h>
struct Item{
   char name[21];
   int upc;
   double price;
   int isTaxed;
};

int main(){

   struct Item A;
   struct Item B = {"Soft kleenex", 386, 45.67, 1};
   struct Item prd[10] = { 
      { "Soft kleenex", 386, 45.67, 1 }, 
      { "Soft kleenex", 386, 45.67, 1 } }

   strcpy(A.name, "Fresh Fish");
   A.upc = 275;
   A.price = 12.34;
   A.isTaxed = 0;
   
   return 0;
}
