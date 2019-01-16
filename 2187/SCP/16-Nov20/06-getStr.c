#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "myIO.h"
int main(void) {
   char name[41];
   //scanf("%40[^\n]", name);
   //flushKeyboard();
   getStr(name, 40);
   return 0;
}

