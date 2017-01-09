#include <string.h>
#include <stdio.h>
#include <ctype.h>



int main() {
   int i;
   char* whereRedIs;
   char str[40] = "Fred";
   char str2[40] = "Fredie";
   // str < str2
   // if(strcmp(str, str2) < 0)
   // str == str2
   // if(strcmp(str, str2) == 0)
   // str > str2
   // if(strcmp(str, str2) > 0)
   if (strcmp(str, str2) < 0) {
      printf("%s", str);
//      printf(str);
   }
   else {
      printf(str2);
   }
   printf("\n");
   return 0;
} 