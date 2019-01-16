#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnStr(const char array[]) {
   int i;
   for (i = 0; array[i] != 0; i++) {
      putchar(array[i]);
   }
}

int main(void) {
   char str[10] = "ABC0";
   prnStr(str);
   putchar('\n');
   printf("str:%s   str[3]:(ascii) %d  str[4]:(ascii) %d\n",str,  str[3], str[4]);
   printf("%c   %d\n", str[0], str[0]);

   return 0;
}
