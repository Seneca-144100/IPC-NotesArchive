#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void){
   char name[41];
   fprintf(stdout, "Hello there! What is your name? ");
   fscanf(stdin,"%41[^\n]", name);
   fprintf(stdout, "Hi %s, Welcome!\n", name);
   return 0;
}