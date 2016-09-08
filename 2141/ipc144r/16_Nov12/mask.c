#include <stdio.h>
#include "tools.h"
#define TAX (0.13)
int main(){
   int upc[10] = { 275, 386, 240, 916, 385, 495, 316, 355, 846, 359 };
   double price[10] = { 12.34, 45.67, 24.34, 123.45, 456.78, 546.02, 78.34, 24.34, 123.45, 99.99 };
   int isTaxed[10] = { 0, 1, 1, 0, 1, 1, 1, 0, 1, 0 };
   int i;
   printf(" UPC  |   Price   |   Tax   |   Total   \n------+-----------+---------+-----------\n");
   for (i = 0; i < 10; i++){
      printf("%-6d|%11.2lf|", upc[i], price[i]);
      if (isTaxed[i])
         printf("%9.2lf|%11.2lf\n", price[i] * TAX, price[i] * (1+TAX));
      else
         printf("%9.2lf|%11.2lf\n", 0.0, price[i]);
   }
   return 0;
}