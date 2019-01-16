
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
     if s1 less than s2  (s1<s2)
    if(strcmp(s1, s2) < 0)
    s1 greater than s2   (s1>s2)
    if(strcmp(s1, s2) > 0)
    s1 is the same as s2 (s1 == s2)
    if(strcmp(s1, s2) == 0)





*/


int main(void) {
   char str1[21];
   char str2[21];
   printf("Enter 2 strings: ");
   scanf("%s %s", str1, str2);
   if (strcmp(str1, str2) < 0) {
      printf("%s comes first in dictionary\n", str1);
   }
   else if (strcmp(str1, str2) > 0) {
      printf("%s comes first in dictionary\n", str1);
   }
   else {
      printf("they are the same\n");
   }
   return 0;
}
