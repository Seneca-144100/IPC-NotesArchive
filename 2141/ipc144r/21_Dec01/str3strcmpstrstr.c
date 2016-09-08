#include <string.h>
#include <stdio.h>
int main(){
   char
      str1[81] = "abcdefghijklmnopqrstuvwxyz";
   /*
   strcmp(a, b) > 0  (a > b)
   strcmp(a, b) == 0  (a == b)
   strcmp(a, b) < 0  (a < b)
   */
   printf("%c    %c\n", *str1, str1[0]);
   if (strstr(str1, "ijk")){
      printf("Its there!\n");
      printf("%s\n", strstr(str1, "ijk"));
      printf("%c\n", *strstr(str1, "ijk"));
      printf("%c\n", strstr(str1, "ijk")[4]);
   }
   if (strstr(str1, "hjk")){
      printf("Its there!\n");
   }
   else{
      printf("It is NOT there!\n");
      // may crash printf("%s\n", strstr(str1, "hjk"));
      // crash printf("%c\n", strstr(str1, "hjk")[4]);
   }
   return 0;
}