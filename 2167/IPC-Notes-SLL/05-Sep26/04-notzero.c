#include <stdio.h>
int main(void) {
   int num;  // a number to be recieved from user
   printf("Please enter a number: ");
   scanf("%d", &num);
   if (num) {
      printf("The number is not zero!\n");
   }
   printf("Program ended!\n");
   return 0;
}