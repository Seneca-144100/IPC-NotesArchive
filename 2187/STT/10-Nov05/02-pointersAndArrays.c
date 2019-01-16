#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"

int main(void) {
   int a[5] = { 10, 20, 30, 40, 50 };
   int* p = a;
   printf("%d\n", a[0]);
   printf("%d\n", *a);
   printf("%d\n", *p);
   printf("%d\n", p[2]);
   return 0;
}
