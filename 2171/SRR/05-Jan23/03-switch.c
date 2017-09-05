#include <stdio.h>
int main() {
   int i;
   printf("Please enter an int: ");
   scanf("%d", &i);
   switch (i){
   case 1:
      printf("One\n");
      break;
   case 3:
      printf("Three\n");
      break;
   case 5:
      printf("Five\n");
   case 6:
      printf("Six\n");
      break;
   case 10:
      printf("Ten\n");
      break;
   default:
      printf("Anything other than 1, 3 or 10.\n");
      break;
   }

   printf("Done!\n");
   return 0;
}