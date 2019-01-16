#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"
int main(void) {
   int a;
   fprintf(stdout, "Please enter an int: ");
   fscanf(stdin, "%d", &a);
   fprintf(stdout, "the number you entered is: %d\n", a);
   return 0;
}
