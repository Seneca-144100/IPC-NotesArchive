#include <stdio.h>
#include "tools.h"
#define TAX (0.13)
int main(){
   int upc[10] = { 275, 386, 240, 916, 385, 495, 316, 355, 846, 359 };
   double price[10] = { 12.34, 45.67, 24.34, 123.45, 456.78, 546.02, 78.34, 24.34, 123.45, 99.99 };
   int i;
   printf(" Item |   Price  \n------+-----------\n");
   for (i = 0; i < 10; i++){
      printf("%-6d|%11.2lf\n", upc[i], price[i]);
   }
   return;
}