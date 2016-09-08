#include <stdio.h>
int main(){
   int a[7] = { 10, 20, 30, 40, 50, 60, 70 };
   int* p;
   printf("%d\n", a[0]);
   p = &a[0];
   printf("%d\n", *p);
   printf("%d\n", p[0]);
   printf("%d\n", p[4]);
   printf("%d\n", *a);
   p = &a[3];
   printf("%d\n", *p);
   printf("%d\n", p[0]);
   printf("%d\n", p[3]);
   return 0;
}