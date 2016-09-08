#include <stdio.h>
int prnResult(int theInt, char theChar);
int main(){
   int
      a = 25;
   char
      ch;
   printf("Enter an int: ");
   scanf("%d", &a);
   printf("Enter a char: ");
   scanf("%c", &ch);
   a = prnResult(a, ch);
   return 0;
}
int prnResult(int i, char c){
   printf("Int: %d, char: %c\n", i, c);
   return i;
}
