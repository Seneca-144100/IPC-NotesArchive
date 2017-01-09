#include <stdio.h>
int main(void) {
   char ch = 65;
   int i;
   printf("%c\n", ch);
   i = ch = ch + 1;
   {
      int x = 5;
      printf("%d   %d\n", ch, x);
      printf("%c\n", ch);
   }
   //printf("%d", x) this will cause an error, because x is gone!
   i = 23 < 5;
   printf("%d\n", i);
   i = 4 >= 2;
   printf("%d\n", i);
   i = 23 != 5;
   printf("%d\n", i);

   return 0;
}