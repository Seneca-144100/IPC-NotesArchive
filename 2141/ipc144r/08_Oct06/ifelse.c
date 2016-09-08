
#include <stdio.h>
void prnMon(int monthValue);
int main(){
   int 
      mn;
   printf("Please enter the month number: ");
   scanf("%d", &mn);
   printf("Month number %d is ", mn);
   prnMon(mn);
   printf("\n");
   return 0;
}

void prnMon(int mn){
   if(mn == 1){
      printf("Jan.");
   }
   else if(mn == 2){
      printf("Feb.");
   }
   else if(mn == 3){
      printf("Mar.");      
   }
   else if(mn == 4){
      printf("Apr.");      
   }
   else if(mn == 5){
      printf("May.");
   }
   else if(mn == 6){
      printf("Jun.");
   }
   else if(mn == 7){
      printf("Jul");
   }
   else if(mn == 8){
      printf("Aug.");
   }
   else if(mn == 9){
      printf("Sep.");
   }
   else if(mn == 10){
      printf("Oct.");
   }
   else if(mn == 11){
      printf("Nov.");
   }
   else if(mn == 12){
      printf("Dec.");
   }
   else{
      printf("Not a valid month number.");
   }
}
