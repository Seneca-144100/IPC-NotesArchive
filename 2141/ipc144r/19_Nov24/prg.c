
#include <stdio.h>
#define TAX (0.13)
struct Item{
   double price;
   int upc;
   int isTaxed;
   char name[21];
};
void printItem(struct Item A);
void printTitles();
int readItem(struct Item* Ip, FILE* fptr);
int listItems(char filename[]);



int main(){
   if (!listItems("items.txt")){
      printf("Could not open items.txt\n");
   }
   return 0;
}




int listItems(char filename[]){
   struct Item I;
   int res = 1;
   FILE* fptr = fopen(filename, "r");
   printf("%u\n", sizeof(I));
   if (fptr){
      printTitles();
      while (!feof(fptr)){
         readItem(&I, fptr);
         if (!feof(fptr)){
            printItem(I);
         }
      }
      fclose(fptr);
   }
   else{
      res = 0;
   }
   return res;
}

void printItem(struct Item A){
   printf("%-5d|%20s|%11.2lf|", A.upc, A.name, A.price);
   if (A.isTaxed)
      printf("%9.2lf|%11.2lf\n", A.price * TAX, A.price * (1 + TAX));
   else
      printf("%9.2lf|%11.2lf\n", 0.0, A.price);
}
void printTitles(){
   printf("UPC  | Name               |   Price   |   Tax   |   Total\n"
      "-----+--------------------+-----------+---------+-----------\n");
}
int readItem(struct Item* Ip, FILE* fptr){
   return fscanf(fptr, "%d,%[^,],%lf,%d", &Ip->upc, Ip->name, &Ip->price, &Ip->isTaxed);
}