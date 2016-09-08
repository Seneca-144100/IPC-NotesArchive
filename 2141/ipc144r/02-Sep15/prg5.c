#include <stdio.h>
int main(){
   char
      ch = 'A';
  /* char
     ch = 65; */     /* base 10. 0 to 9*/
   //char
   //   ch = 0x41;   /* base 16, (hex) 0 to F*/
   char
      ch = 0101; /* base 8 (oct)0 to 7 not binary*/
   putchar(ch);
   ch = ch + 3;
   putchar(ch);
   return 0;
}

