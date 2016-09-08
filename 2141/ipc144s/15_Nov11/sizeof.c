#include <stdio.h>
void prnInts(int ar[], int size){
   int i;
   printf("%u\n", sizeof(ar));// not size of array, but only size of the pointer
                              // pointing to the array
   for (i = 0; i < size; i++) printf("%d, ", ar[i]);
   printf("\n");
}
int main(){
   int a[10] = { 10, 20, 30, 40, 50, 60, 70 };
   int* p = a;
   double dv;
   double* d = &dv;
   char* c;
   prnInts(a, 7);
   printf("%u\n", sizeof(a));
   printf("%u\n", sizeof(a)/sizeof(int));
   printf("%u\n", sizeof(p));
   printf("%u\n", sizeof(d));
   printf("%u\n", sizeof(*d));
   printf("%u\n", sizeof(c));
   return 0;
}