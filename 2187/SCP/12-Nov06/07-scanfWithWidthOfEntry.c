#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
   char name[10];
   printf("Enter your name: ");
   scanf("%9[^\n]", name);
   printf("Hello %s, how are you?\n", name);
   return 0;
}



