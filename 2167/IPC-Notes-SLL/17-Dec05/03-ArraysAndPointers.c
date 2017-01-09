#include <stdio.h>
int main() {
   int a[4] = { 10,20,30,40 };
   int* p = a;
   int i; 
   printf("%u\n", a);
   printf("%u\n", &a[0]);
   printf("%u\n", &a[1]);
   for (int i = 0; i < 4; i++, p++) {
      printf("(*%u): %d ",p , *p);
   }
   printf("\n");
   return 0;
}