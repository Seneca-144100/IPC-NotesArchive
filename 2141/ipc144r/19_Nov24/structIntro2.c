
#include <stdio.h>
#define TAX (0.13)
struct Item{
   char name[21];
   int upc;
   double price;
   int isTaxed;
};
void printItem(int upc, char item[], double price, int taxed);
void printTitles();
int readItem(int* upc, char* name, double* price, int* isTaxed, FILE* fptr);
 
int main(){
   struct Item I;
   FILE* fptr = fopen("items.txt", "r");
   if (fptr){
      printTitles();
      while (!feof(fptr)){
         readItem(&I.upc, I.name, &I.price, &I.isTaxed, fptr);
         if (!feof(fptr)){
            printItem(I.upc, I.name, I.price, I.isTaxed);
         }
      }
      fclose(fptr);
   }
   else{
      printf("Could not open items.txt\n");
   }
   return 0;
}

void printItem(int upc, char item[], double price, int taxed){
   printf("%-5d|%20s|%11.2lf|", upc, item, price);
   if (taxed)
      printf("%9.2lf|%11.2lf\n", price * TAX, price * (1 + TAX));
   else
      printf("%9.2lf|%11.2lf\n", 0.0, price);
}
void printTitles(){
   printf("UPC  | Name               |   Price   |   Tax   |   Total\n"
      "-----+--------------------+-----------+---------+-----------\n");
}
int readItem(int* upc, char* name, double* price, int* isTaxed, FILE* fptr){
   return fscanf(fptr, "%d,%[^,],%lf,%d", upc, name, price, isTaxed);
}