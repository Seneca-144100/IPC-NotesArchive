#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
   char str1[21] = "FRED";
   char str2[21] = "abcdefghijklmno";
   //str1 = str2;
   printf("str1: %s (%d), str2:%s (%d)\n", str1,strlen(str1), str2, strlen(str2));
   printf("copying str1 into str2:\n");
   strcpy(str2, str1);
   printf("str1: %s (%d), str2:%s (%d)\n", str1, strlen(str1), str2, strlen(str2));
   return 0;
}

