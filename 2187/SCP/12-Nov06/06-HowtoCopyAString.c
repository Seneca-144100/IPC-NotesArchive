#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
void StrCpy(char des[], const char src[]);
int main(void) {
   char n1[41] = "fardad";
   char n2[41];
 //  n2 = n1; // error 
   StrCpy(n2, n1);
   printf("%s\n", n2);
   return 0;
}
void StrCpy(char des[], const char src[]) {
   int i;
   for (i = 0;src[i] != 0 ; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}
