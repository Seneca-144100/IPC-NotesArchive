#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"


int main(void) {
   int r;
   int a = 100;
   double b= 100.123;
   char c = 'X';
   printf("Please enter int double char: ");
   r = scanf("%d,%lf,%c", &a, &b, &c);
   printf("scanf returned: %d\n", r);
   printf(">>>a: %d, b:%lf, c:%c<<<\n", a, b, c);
   return 0;
}
