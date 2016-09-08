#include <stdio.h>
#include "tools.h"
#define TAX (0.13)
int findItem(int upc, int UPCs[], int size);
int main(){
   char items[10][21] = { "Fish","kleenex","Tide","apples","broom","soap","cookies",
                           "milk","chocolate","banana" };
   int upc[10] = { 275, 386, 240, 916, 385, 495, 316, 355, 846, 359 };
   double price[10] = { 12.34, 45.67, 24.34, 123.45, 456.78, 546.02, 78.34, 24.34, 123.45, 99.99 };
   int isTaxed[10] = { 0, 1, 1, 0, 1, 1, 1, 0, 1, 0 };
   int theUpc;
   int foundIndex;
   do{
      printf("UPC: ");
      theUpc = getInt();
      foundIndex = findItem(theUpc, upc, 10);
      if (foundIndex>=0){
         printf("Price of %s %.2lf%s", items[foundIndex],
            price[foundIndex], isTaxed[foundIndex] ? ", this item is taxed\n" : "\n");
      }
      else{
         printf("Not Found!\n");
      }
      printf("Search again? Y/N: ");
   } while (yes());
   return;
}

int findItem(int upc, int UPCs[], int size){
   int i = -1;
   int found = 0;
   while (++i < size && !found){
      if (upc == UPCs[i]){
         found = 1;
      }
   }
   if (!found)
      i = -1;
   else
      i--;   // to go back to the found index;
   return i;
}