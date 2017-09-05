#include <stdio.h>
int main(void) {
   int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
   int* p;
   p = &a[0];
   printf("%d\n", *p);
   printf("%d\n", p[5]);
   return 0;
}