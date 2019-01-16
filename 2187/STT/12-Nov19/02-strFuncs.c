#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnStr(const char array[]) {
   int i;
   for (i = 0; array[i] != 0; i++) {
      putchar(array[i]);
   }
}
void strCpy(char des[], const char src[]) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}

int strLen(const char* str) {
   int i;
   for (i = 0; str[i]; i++);
   return i;
}


int main(void) {
   char str1[21] = "FRED";
   char str2[21] = "abcdefghijklmno";
//   str2 = str1;   Wrong, operator = is only for single variables and not arrays 
   strCpy(str2, str1);
   printf("str1: %s, str2:%s\n", str1, str2);
   printf("str1 is %d characters long.\n", strLen(str1));
   return 0;
}
