
#include <stdio.h>
int main(void) {
   int num;  // integers to print
   int cnt;// a number to be recieved from user
   int toomuch = 0;
   int sixcoof;
   printf("Please enter a number of integers to print: ");
   scanf("%d", &cnt);
 
 
   for (num = 0; num < cnt && !toomuch; num++) {
      /*     sixcoof = num * 6;
      printf("%d\n", sixcoof);*/
      printf("%d\n", num * 6);
      if (num > 10) toomuch = 1;

      // num++ happens here
   }

   printf("Program ended!\n");
   return 0;
}