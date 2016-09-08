#include <stdio.h>
#include "mystring.h"
int main(){
   char str1[21] = "abc";
   char str2[21] = "defgih";
   printf("the lenght of the string containing %s is %d\n", str1, mystrlen(str1));
   printf("str1: $%-20s$ str2: $%-20s$\n", str1, str2);
   mystrcpy(str1, str2);
   printf("after mystrcpy:\n");
   printf("str1: $%-20s$ str2: $%-20s$\n", str1, str2);
   printf("------------------------------\n");


   mystrcpy(str1, "abc");
   printf("str1: $%-20s$ str2: $%-20s$\n", str1, str2);
   mystrcat(str1, str2);
   printf("after mystrcat:\n");
   printf("str1: $%-20s$ str2: $%-20s$\n", str1, str2);
   printf("------------------------------\n");
   
   mystrcpy(str1, "abc");
   mystrcpy(str2, "def");
   printf("str1: $%-20s$ str2: $%-20s$\n", str1, str2);
   printf("mystrcmp(str1, str2): %d\n", mystrcmp(str1, str2));
   mystrcpy(str1, "def");
   mystrcpy(str2, "abc");
   printf("str1: $%-20s$ str2: $%-20s$\n", str1, str2);
   printf("mystrcmp(str1, str2): %d\n", mystrcmp(str1, str2));
   mystrcpy(str1, "abc");
   mystrcpy(str2, "abc");
   printf("str1: $%-20s$ str2: $%-20s$\n", str1, str2);
   printf("mystrcmp(str1, str2): %d\n", mystrcmp(str1, str2));
   return 0;
}

