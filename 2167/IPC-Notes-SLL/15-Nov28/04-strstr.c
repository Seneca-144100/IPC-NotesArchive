#include <string.h>
#include <stdio.h>
#include <ctype.h>

// if you like the strstr to work case-insensetive you must write the function to upper yourself
void str2upper(char* des, const char* src) {
   int i;
   for (i = 0;src[i] != NULL; i++) {
      des[i] = toupper(src[i]);
   }
   des[i] = NULL;
}

int main() {
   int i;
   char* whereRedIs;
   char str[40] = "Fred";
   char str2[40] = "Soley";
//   char str[40] = { 'F','r','e','d' };
   char name[41] = "1234567890123456789012345678901234567890";
   strcpy(name, str);
   strcat(name, " ");
   strcat(name, str2);
   printf(">%s<\n", name);
   whereRedIs =  strstr(name, "red");
   printf("%s\n", whereRedIs);
   return 0;
} 