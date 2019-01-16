#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myIO.h"

int main(void) {
   int a[5] = { 10, 20, 30, 40, 50 };
   int* p = a;
   printf("%d\n", *p);
   p += 2;
   printf("%d\n", *p);
   (*p) += 2;
   printf("%d\n", *p);
   p += 2;
   printf("%d\n", *p);
   return 0;
}
