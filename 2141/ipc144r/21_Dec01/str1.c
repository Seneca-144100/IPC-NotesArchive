#include <string.h>
#include <stdio.h>
int main(){
   char
      str2[81],
      str1[81] = "abcdefghijklmnopqrstuvwxyz";
   printf("%s\n", str1);
   printf("strlen(str1): %d\n", strlen(str1));
   str1[10] = 0;
   printf("%s\n", str1);
   printf("strlen(str1): %d\n", strlen(str1));
   printf("%s\n", &str1[11]);
   printf("strlen(str1): %d\n", strlen(&str1[11]));
   printf("%s\n", &str1[81]); // garbage 
   printf("strlen(str1): %d\n", strlen(&str1[81])); // lenght of garbage
   return 0;
}