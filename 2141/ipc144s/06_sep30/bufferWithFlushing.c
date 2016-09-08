#include <stdio.h>
int prnResult(int theInt, char theChar);
int main(){
   int
      a = 25;
   char
      ch;
   printf("Enter an int: ");
   scanf("%d", &a);
   fflush(stdin);
   printf("Enter a char: ");
   scanf("%c", &ch);
   fflush(stdin);
   a = prnResult(a, ch);
   return 0;
}
int prnResult(int i, char c){
   printf("Int: %d, char: %c\n", i, c);
   return i;
}
