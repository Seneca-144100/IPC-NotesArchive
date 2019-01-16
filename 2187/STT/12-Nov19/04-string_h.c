#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
   char firstName[21] = "FRED";
   char lastName[21] = "Soley";
   char fullName[41];
   strcpy(fullName, firstName);
   strcat(fullName, " ");
   strcat(fullName, lastName);
   printf("fullname: %s\n", fullName);
   /*
   str1 > str2 
   strcmp(str1 , str2) > 0 
   str1 == str2
   strcmp(str1 , str2) == 0
   str1 < str2
   strcmp(str1 , str2) < 0

   */

   if (strcmp(firstName, lastName) > 0) {
      printf("%s > %s\n", firstName, lastName);
   }
   else {
      printf("%s <= %s\n", firstName, lastName);
   }
   return 0;
}
