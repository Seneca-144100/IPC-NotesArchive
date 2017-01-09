#include <stdio.h>
int main() {
   int a[4] = { 10,20,30,40 };
   int* p = a;
   int i; 
   printf("%u\n", a);
   printf("%u\n", &a[0]);
   printf("%u\n", &a[1]);
   for (int i = 0; i < 4; i++) {
      printf("%d ", p[i]);
   }
   printf("\n");
   return 0;
}