#include <stdio.h>
int main(void) {
   int num;  // a number to be recieved from user
   printf("Please enter a number: ");
   scanf("%d", &num);
   if (num > 10) {
      printf("The number is greater than ten!\n");
   }
   else {
      if (num == 10) {
         printf("you entered ten!\n");
      }
      else {
         printf("The number is less than ten!\n");
      }
   }
   printf("Program ended!\n");
   return 0;
}