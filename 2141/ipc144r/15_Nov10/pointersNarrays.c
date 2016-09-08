#include <stdio.h>
void prnInts(int* ar, int size){
   int i;
   printf("%u\n", sizeof(ar));
   for (i = 0; i < size; i++) printf("%d, ", ar[i]);
   printf("\n");
}
int main(){
   int a[7] = { 10, 20, 30, 40, 50, 60, 70 };
   int* p;
   prnInts(a, 7);
   //p = &a[0];
   p = a;
   printf("%d\n", a[0]);
   printf("%u\n", p);
   printf("%d\n", *p);
   printf("%d\n", p[0]);
   printf("%d\n", *a);
   p = &a[3];
   printf("%d\n", p[0]);
   printf("%d\n", p[2]);
   return 0;
}