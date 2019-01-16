#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
   char str1[21];
   char str2[21];
   char fullname[42];
   printf("Enter Fist name:");
   scanf("%s", str1);
   printf("Enter last name:");
   scanf("%s", str2);
   strcpy(fullname, str1);
   strcat(fullname, " ");
   strcat(fullname, str2);
   printf("Your fullname is: %s\n", fullname);
   return 0;
}

