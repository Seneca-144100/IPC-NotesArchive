#include <string.h>
#include <stdio.h>
int main() {
   int i;
//   char str[40] = { 'X'};
   char str[40] = { 'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X' };
   printf(">%s<\n", str);
   str[10] = NULL;
   printf(">%s<\n", str);
   putchar('\n');
   for (i = 0;i < 40;i++) {
      putchar(str[i]);
   }
   putchar('\n');
   return 0;
}