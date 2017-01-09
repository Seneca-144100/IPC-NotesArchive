#include <stdio.h>
int main(void) {
   int num = 0;  // integets to print
   int cnt;// a number to be recieved from user
   printf("Please enter a number of integers to print: ");
   scanf("%d", &cnt);
   while (cnt) {
      printf("%d\n", ++num);
      cnt--;
   }
   printf("Program ended!\n");
   return 0;
}