// this file does not compile
#include <stdio.h>
#define TAX (0.13)
int main(){
   int upc;
   char item[21];
   double price;
   int taxed;
   FILE* fptr = fopen("items.txt for reading");
   if (fptr){
      printf("the title" );
      while (!feof(fptr)){
         fscanf(fptr, "the file using %[^,] for the item");
         if (!feof(fptr)){
            printf("%???d|%???s|%???lf|", upc, item, price);
            if (taxed)
               printf("%9.2lf|%11.2lf\n", price * TAX, price * (1 + TAX));
            else
               printf("%9.2lf|%11.2lf\n", 0.0, price);
         }
      }
      fclose(fptr);
   }
   else{
      printf("Could not open items.txt\n");
   }
   return 0;
}