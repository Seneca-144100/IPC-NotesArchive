#include <string.h>
#include <stdio.h>
int main(){
   char
      str1[81] = "abcdefghijklmnopqrstuvwxyz";
   printf("%c    %c\n", *str1, str1[0]);
   if (strstr(str1, "ijk")){
      printf("It is there!\n");
      printf("%c\n", *strstr(str1, "ijk"));
      printf("%c\n", strstr(str1, "ijk")[4]);
      printf("%s\n", strstr(str1, "ijk"));
      strncpy(strstr(str1, "ijk"), "@@@", 3); // replace ijk with @@@
      printf("%s\n", str1);
   }
   if (strstr(str1, "hjk")){
      printf("It is there!!!!\n");
   }
   else{
      printf("It is NOT there!\n");
   }

   return 0;
}