#include <string.h>
#include <stdio.h>
int main(){
   char
      str2[81],
      str1[81] = "abcdefghijklmnopqrstuvwxyz";
   str1[10] = 0;
   // reset -------
   strcpy(str2, str1);
   printf("%s\n", str2);
   strncpy(str2, "xyz", 4);
   printf("%s\n", str2);
   // reset -------
   strcpy(str2, str1);
   printf("%s\n", str2);
   strncpy(str2, "xyz", 2);
   printf("%s\n", str2);
   // reset -------
   strcpy(str2, str1);
   printf("%s\n", str2);
   strncpy(str2, "xyz", 3);
   printf("%s\n", str2);
   // reset -------
   strcpy(str2, str1);
   printf("%s\n", str2);
   strncpy(&str2[3], "@@@", 3);
   printf("%s\n", str2);
   return 0;
}