#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"

int main(void) {
   char someStr[41];
   printf("Please enter something: ");
   getStr(someStr, 40);
   printf("Your typed \"%s\"\n", someStr);
   printf("Please  enter something else: ");
   getStr(someStr, 10);
   printf("and then you typed \"%s\"\n", someStr);
   return 0;
}













