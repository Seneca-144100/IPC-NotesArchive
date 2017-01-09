#include <stdio.h>
int main(void) {
   int i = 9; int j = 7;
   printf("!%dr G%dr\rL!\n", --i, ++j);
   return 0;
}
/*
L!r G8r
*/