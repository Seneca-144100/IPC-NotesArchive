#include <stdio.h>
#include <string.h>
int main(void) {
   char name[41] = "Fred";
   char surname[41] = "Soley";
   char fullname[81];
   
   strcpy(fullname, name);
   printf("%s\n", fullname);
   strcat(fullname, " ");
   strcat(fullname, surname);
   printf("%s\n", fullname);
   // if (name > surname)   wrong!
   if (strcmp(name, surname) > 0) {
      printf("%s comes after %s\n", name, surname);
   }
   else {
      printf("%s comes after %s\n", surname, name);
   }


   return 0;
}