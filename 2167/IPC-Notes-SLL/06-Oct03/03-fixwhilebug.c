
#include <stdio.h>
int main(void) {
   int num;  // integers to print
   int cnt;// a number to be recieved from user
   int toomuch = 0;
   printf("Please enter a number of integers to print: ");
   scanf("%d", &cnt);
 /*  num = 0;// init
   while (num < cnt) { // cond to be checked before each loop
       printf("%d\n", num + 1);
      num++; // to do something at the very end of the loop
   }*/


   // fix the bug so it stops if the printed number is passed 10
   for(num = 0;  num < cnt && !toomuch; num++){
      printf("%d\n", num + 1);
      if (num > 10) toomuch = 1;
   }

   printf("Program ended!\n");
   return 0;
}