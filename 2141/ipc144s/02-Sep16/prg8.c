#include <stdio.h>
int main(){
   int
      ch;
   ch = 'A';
   putchar(ch);
   putchar('\n');
   ch = ch + 3;
   putchar(ch);
   putchar('\n');
   putchar('\a');
   ch = 'A';
   putchar(ch);
   ch = ch + 1;
   putchar(ch);
   ch = ch + 1;
   putchar(ch);
   ch = ch + 1;
   putchar(ch);
   putchar('\n');
   ch = 'A';
   putchar(ch);
   ch = ch + 1;
   putchar(ch);
   ch = ch + 1;
   putchar(ch);
   putchar('\b');
   ch = ch + 1;
   putchar(ch);
   putchar('\n');
   return 0;
}