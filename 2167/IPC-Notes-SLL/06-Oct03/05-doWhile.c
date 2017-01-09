
#include <stdio.h>
int main(void) {
   int num;  // integers to print
   int cnt;// a number to be recieved from user
   int toomuch = 0;
   int sixcoof;
   do {
      printf("Please enter a number of integers to print (less than 10): ");
      scanf("%d", &cnt);
      if (cnt > 10 || cnt < 1) {
         printf("Invalid entry, ");
      }
   } while (cnt > 10 || cnt < 1);
    num = 0;// init
   while (num < cnt) { // cond to be checked before each loop
     printf("%d\n", num + 1);
     num++; // to do something at the very end of the loop
   }


   printf("Program ended!\n");
   return 0;
}