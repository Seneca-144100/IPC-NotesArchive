#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"


int main(void) {
   char name[11];
   printf("Please enter you name: ");
   scanf("%10s", name); // up to 10 char strings which needs 11 char array
   printf("Hello %s, how are you?\n", name);
   return 0;
}
