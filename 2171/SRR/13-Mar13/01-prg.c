#include <stdio.h>
int main(void) {
   int* p;
   int i;
   int j;
   int k;
   p = &i;
   *p = 10;
   p = &j;
   *p = 20;
   p = &k;
   *p = 30;
   printf("%d %d %d\n", i, j, k);
   return 0;
}