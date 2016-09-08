#include <stdio.h>
#inclue "tools.h"
#define TAX (0.13)
int main(){
   int 
      upc,
      userUpc,
      found = 0;
   double price;
   int isTaxed;
   char item[21];
   FILE* fptr = fopen("items.tx", "r");
   if (fptr){
      loop{
         //asking for upc goes here
         printf("UPC  | Name               |   Price   |   Tax   |   Total\n"
         "-----+--------------------+-----------+---------+----------- \n");
         while (!feof(fptr)){
            fscanf(fptr, "%d,%20[^,],%lf,%d", &upc, item, &price, &isTaxed);
            // checking the userupc with upc
            if (!feof(fptr)){  // add the condition here with &&
               printf("%-5d|%-20s|%11.2lf|", upc, item, price);
               if (isTaxed)
                  printf("%9.2lf|%11.2lf\n", price * TAX, price * (1 + TAX));
               else
                  printf("%9.2lf|%11.2lf\n", 0.0, price);
               found = 1;
            }
         }
         if (!found){
            //message goes here
         }
         // ask user if continue?
         // if yes, rewind the file
      }utill user quits
      fclose(fptr);
   }
   else{
      printf("Could not open the file!\n");
   }
   return 0;
}