#include <stdio.h>

void StrCpy(char des[], const char src[]) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}

int StrLen(const char str[]) {
   int len = 0;
   while (str[len] != 0) {
      len++;
   }
   return len;
}

void StrCat(char des[], const char src[]) {
   int i = StrLen(des);
   int j;
   for (j = 0; src[j] != 0; j++, i++) {
      des[i] = src[j];
   }
   des[i] = 0;
}

int main(void) {
   char name[41] = "Fred";
   char surname[41] = "Soley";
   char fullname[81];

   StrCpy(fullname, name);
   printf("%s\n", fullname);
   StrCat(fullname, " ");
   StrCat(fullname, surname);
   printf("%s\n", fullname);




   return 0;
}