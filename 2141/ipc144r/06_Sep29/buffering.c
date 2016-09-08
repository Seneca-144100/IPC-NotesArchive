#include <stdio.h>
int main(){
   int 
      a, 
      b;
   char
      ch;
   printf("Enter an int: ");
   scanf("%d", &a);
   fflush(stdin); //flushes the keyboard so the next input is fresh
   printf("Enter a char: ");
   scanf("%c", &ch);
   printf("int: %d and char: %c\n", a, ch);
   printf("----------------------\n");
   return 0;
}