#include <string.h>
#include <stdio.h>
struct Name{
   char first[21];
   char last[41];
};
struct Car{
   char make[41];
   int model;
   char color[21];
   char licPlt[9];
   int custNo;
   int orderNo;
   double cost;
   char repairDesc[2048];
   struct Name custName;
};
void setMakeMode(struct Car* cp, char make[41], int model){
   strcpy(cp->make, make);
   cp->model = model;
}
int main(){
   struct Car C;
//   strcpy(C.make, "Honda Civic");
//   C.model = 1998;
   setMakeMode(&C, "Honda Civic", 1998);
   strcpy(C.color, "Dark Green");
   strcpy(C.custName.first, "Fardad");
   strcpy(C.custName.last, "Soleimanloo");
   return 0;
}