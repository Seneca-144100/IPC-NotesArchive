
#include <stdio.h>
int main(void) {
   int* p;
   double* q;
   int i;
   double d;
   p = &i;
   q = &d;
   printf("integer pointer:\n");
   printf("%u\n", p);
   p++;
   printf("%u\n", p);
   printf("double pointer:\n");
   printf("%u\n", q);
   q++;
   printf("%u\n", q);

   i = d * i;
   return 0;
}

