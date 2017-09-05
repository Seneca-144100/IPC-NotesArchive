#include <stdio.h>
int main(void) {
   char str[21];
 /*  printf("Enter a string less than 20 chars: ");
   scanf("%20s", str);
   printf("You Entered: %s\n", str);*/
   printf("Enter a string less than 20 chars: ");
   scanf("%20[^\n]", str);
   printf("You Entered: %s\n", str);
   return 0;
}