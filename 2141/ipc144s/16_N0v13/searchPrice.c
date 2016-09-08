#include <stdio.h>
#include "tools.h"
#define TAX (0.13)
int getPrice(double* priceOut, int upc, int UPCs[], double Prices[], int size);
int main(){
   int upc[10] = { 275, 386, 240, 916, 385, 495, 316, 355, 846, 359 };
   double price[10] = { 12.34, 45.67, 24.34, 123.45, 456.78, 546.02, 78.34, 24.34, 123.45, 99.99 };
   int theUpc;
   double thePrice;
   do{
      printf("UPC: ");
      theUpc = getInt();
      if (getPrice(&thePrice, theUpc, upc, price, 10)){
         printf("Price: %.2lf\n", thePrice);
      }
      else{
         printf("Not Found!\n");
      }
      printf("Search again? Y/N: ");
   } while (yes());
   return;
}
// getPrice, gets the address of price to set it and receives the list of items + prices and size and a upc to search for.
int getPrice(double* priceOut, int upc, int UPCs[], double Prices[], int size){
   int i=-1;
   int found = 0;
   while (++i < size && !found){
      if (upc == UPCs[i]){
         *priceOut = Prices[i];
         found = 1;
      }
   }
   return found;
}