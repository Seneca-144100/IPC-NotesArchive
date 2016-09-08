#include <string.h>
#include <stdio.h>
int main(){
   char
      str1[81] = "abcdefghijklmnopqrstuvwxyz",
      str2[81];
   printf("%s\n", str1);
   printf("strlen(str1): %d\n", strlen(str1));
   str1[10] = 0;
   strcpy(str2, str1);
   printf("%s\n", str2);
   printf("strlen(str2): %d\n", strlen(str2));
   //---------------------------------
   strcpy(str2, &str1[5]);
   printf("%s\n", str2);
   printf("strlen(str2): %d\n", strlen(str2));
   //---------------------------------
   strcpy(str2, str1 + 5);
   printf("%s\n", str2);
   printf("strlen(str2): %d\n", strlen(str2));
   // reset to 10 chars
   strcpy(str2, str1);
   //-----------------------
   printf("before: %s\n", str2);
   strncpy(str2, "xyz", 4);
   printf("After : %s\n", str2);
   printf("strlen(str2): %d\n", strlen(str2));
   // reset to 10 chars
   strcpy(str2, str1);
   //-----------------------
   printf("before: %s\n", str2);
   strncpy(str2, "xyz", 2);
   printf("After : %s\n", str2);
   printf("strlen(str2): %d\n", strlen(str2));
   // reset to 10 chars
   strcpy(str2, str1);
   //-----------------------
   printf("before: %s\n", str2);
   strncpy(str2, "xyz", 3);
   printf("After : %s\n", str2);
   printf("strlen(str2): %d\n", strlen(str2));
   // reset to 10 chars
   strcpy(str2, str1);
   //-----------------------
   printf("before: %s\n", str2);
   strncpy(&str2[3], "xyz", 3);
   printf("After : %s\n", str2);
   printf("strlen(str2): %d\n", strlen(str2));
   return 0;
}