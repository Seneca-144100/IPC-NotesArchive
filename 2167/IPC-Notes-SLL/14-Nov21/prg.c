#include <stdio.h>
#include <string.h>
int main(void) {
   char name[61];
   char name2[61];
   printf("Please enter your name: ");
   scanf("%[^\n]", name);
   strcpy(name2, name);
   printf("Hello %s, you name is %d, characters long.\n", name2, strlen(name2));
   return 0;
}

