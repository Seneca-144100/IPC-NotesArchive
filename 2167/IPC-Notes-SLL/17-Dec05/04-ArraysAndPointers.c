#include <stdio.h>
int main() {
   double a[4] = { 10,20,30,40 };
   double* p = a;
   int i; 
   printf("Sizeof double is %u\n", sizeof(double));
   printf("%u\n", a);
   printf("%u\n", &a[0]);
   printf("%u\n", &a[1]);
   for (int i = 0; i < 4; i++, p++) {
      printf("(*%u): %0.2lf ",p , *p);
   }
   printf("\n");
   return 0;
}