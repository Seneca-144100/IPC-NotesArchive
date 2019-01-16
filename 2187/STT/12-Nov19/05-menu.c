#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "myIO.h"
// gcc myIO.c 05-menu.c<ENTER>
int menu(void) {
   printf("1- option one\n");
   printf("2- option two\n");
   printf("3- option three\n");
   printf("0- exit\n");
   return getLimitedInt(0, 3);
}

int main(void){
   int done = 0;
   while (!done) {
      switch (menu()){
      case 1:
         printf("Do option one!\n");
         break;
      case 2:
         printf("Do option Two!\n");
         break;
      case 3:
         printf("Do option Three!\n");
         break;
      case 0:
         done = 1;
         break;
      default:
         printf("This will never happen!!! call the police!\n");
         break;
      }
      if(!done) pause();
   }
   printf("Goodbye!\n");

   return 0;
}
