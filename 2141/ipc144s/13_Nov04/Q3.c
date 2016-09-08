#include <stdio.h>
int main(){
   int ch;
   for (ch = 0; ch < 256; ch++){
      if (ch < 14 || ch == 240)
         printf( "  - %03d - %02X     ", ch, ch);
      else
         printf("%c - %03d - %02X     ", ch, ch, ch);
      if (ch % 4 == 3) putchar('\n');
   }
   return 0;
}