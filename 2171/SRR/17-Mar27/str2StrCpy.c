#include <stdio.h>

void StrCpy(char des[], const char src[]) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}


int main(void) {
   char name1[41];
   char name2[41];

   StrCpy(name1, "Fred");
   printf("%s\n", name1);
   StrCpy(name2, name1);
    
   printf("%s\n", name1);
   printf("%s\n", name2);


   return 0;
}