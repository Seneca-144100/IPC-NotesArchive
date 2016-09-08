#include <stdio.h>
int main(){
   int a = 10;
   int* p = &a;
   printf("%u, %u, %u, %d, %d\n", &a, p, &p, a, *p);
   printf("%d, %d, %d\n", sizeof(a), sizeof(p), sizeof(*p));
   printf("%d, %d, %d, %d\n", sizeof(char), sizeof(int), sizeof(double), sizeof(long long));
   printf("%d, %d, %d, %d\n", sizeof(char*), sizeof(int*), sizeof(double*), sizeof(long long*));
   return 0;
}