#include <stdio.h>
int main() {
   const double pi = 3.14159265;
   int i = 10, j, k;
   j = 20;
   i = j + 40;
   printf("i: %d\n", i);
   i = i - 10;
   i = 34;
   j = i % 10;
   printf("j: %d\n", j);
   i = j * 20;
   printf("i: %d\n", i);
   i = 10; 
   j = 20;
   k = i > j;
   printf("k: %d\n", k);
   k = i < j;
   printf("k: %d\n", k);
   k = i != j;
   printf("k: %d\n", k);
   i = 1;
   j = 0;
   k = i && j;
   printf("k: %d\n", k);
   i = 1;
   j = 0;
   k = i || j;
   printf("k: %d\n", k);
   i = 32;
   j = 0;
   k = i || j;
   printf("k: %d\n", k);

   return 0;
}

