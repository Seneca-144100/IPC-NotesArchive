#include <stdio.h>
#define TAX (0.13)
struct Item{
   char name[21];
   int upc;
   double price;
   int isTaxed;
};
void prnTitles();
void prnItemRow(struct Item ItemToPrint);
int readItem(struct Item* AdderssOfItem, FILE* FileToReadFrom);
int main(){
   struct Item I;
   FILE* fptr = fopen("items.txt", "r");
   if (fptr){
      prnTitles();
      while (!feof(fptr)){
         readItem(&I, fptr);
         if (!feof(fptr)){
            prnItemRow(I);
         }
      }
      fclose(fptr);
   }
   else{
      printf("Could not open the file!\n");
   }
   return 0;
}

void prnTitles(){
   printf("UPC  | Name               |   Price   |   Tax   |   Total\n"
      "-----+--------------------+-----------+---------+----------- \n");
}
void prnItemRow(struct Item A){
   printf("%-5d|%-20s|%11.2lf|", A.upc, A.name, A.price);
   if (A.isTaxed)
      printf("%9.2lf|%11.2lf\n", A.price * TAX, A.price * (1 + TAX));
   else
      printf("%9.2lf|%11.2lf\n", 0.0, A.price);
}
int readItem(struct Item* Ip, FILE* fptr){
   return fscanf(fptr, "%d,%20[^,],%lf,%d", &Ip->upc, Ip->name, &Ip->price, &Ip->isTaxed)==4;
}