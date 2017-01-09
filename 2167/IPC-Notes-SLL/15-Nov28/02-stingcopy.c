#include <string.h>
#include <stdio.h>
void StrCpy(char* des, const char* src) {
   int i;
   for (i = 0; src[i] != NULL; i++) {
      des[i] = src[i];
   }
   des[i] = NULL;
}
int main() {
   int i;
   char str[40] = "Fred";
//   char str[40] = { 'F','r','e','d' };
   char name[21] = "12345678901234567890";
   StrCpy(name, str);
   printf(">%s<\n", str);
   printf(">%s<\n", name);
   return 0;
}