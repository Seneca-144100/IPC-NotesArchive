#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void strCpy(char des[], const char src[]) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}

int strLen(const char str[]) {
   int i;
   for (i = 0; str[i] != 0; i++);
   return i;
}

int main(void) {
   char str1[21] = "FRED";
   char str2[21] = "abcdefghijklmno";
   //str1 = str2;
   printf("str1: %s (%d), str2:%s (%d)\n", str1,strLen(str1), str2, strLen(str2));
   printf("copying str1 into str2:\n");
   strCpy(str2, str1);
   printf("str1: %s (%d), str2:%s (%d)\n", str1, strLen(str1), str2, strLen(str2));
   return 0;
}

