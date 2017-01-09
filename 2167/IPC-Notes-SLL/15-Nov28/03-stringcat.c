#include <string.h>
#include <stdio.h>
void StrCpy(char* des, const char* src) {
   int i;
   for (i = 0; src[i] != NULL; i++) {
      des[i] = src[i];
   }
   des[i] = NULL;
}
void StrCat(char* des, const char* src) {
   int i, j;
   for (i = 0;des[i] != NULL;i++);
   for (j = 0; src[j] != NULL; j++, i++) {
      des[i] = src[j];
   }
   des[i] = NULL;
}
int main() {
   int i;
   char str[40] = "Fred";
   char str2[40] = "Soley";
//   char str[40] = { 'F','r','e','d' };
   char name[41] = "1234567890123456789012345678901234567890";
   StrCpy(name, str);
   StrCat(name, " ");
   StrCat(name, str2);
   printf(">%s<\n", name);
   return 0;
} 