#include <string.h>
#include <stdio.h>
int main(){
   char
      str1[81] = "abcdefghijklmnopqrstuvwxyz",
      str2[81];
   printf("%s\n", str1);
   printf("strlen(str1): %d\n", strlen(str1));
   str1[10] = 0;
   printf("%s\n", str1);
   printf("strlen(str1): %d\n", strlen(str1));
   printf("%s\n", &str1[11]);
   printf("strlen(&str1[11]): %d\n", strlen(&str1[11]));
   //-=--------------------------
   printf("%s\n", &str1[27]);
   printf("strlen(&str1[27]): %d\n", strlen(&str1[27]));
   //-=--------------------------
   printf("%s\n", str2);        //garbage
   printf("strlen(&str1[27]): %d\n", strlen(str2)); //garbage
   return 0;
}