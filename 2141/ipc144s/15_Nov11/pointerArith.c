#include <stdio.h>
int main(){
   double* dp = 0;
   int* p = 0;
   int i = 0;
   printf("%u, %u,  %d\n",dp, p, i);
   i++;
   p++;
   dp++;
   printf("%u, %u,  %d\n", dp, p, i);
   i+=2;
   p += 2;
   dp += 2;
   printf("%u, %u,  %d\n", dp, p, i);
   return 0;
}