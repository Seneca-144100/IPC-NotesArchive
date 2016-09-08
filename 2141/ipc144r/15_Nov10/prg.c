#include <stdio.h>
void prnInts(int* ar, int size){
   int i;
   printf("%u\n", sizeof(ar));
   for (i = 0; i < size; i++) printf("%d, ", ar[i]);
   printf("\n");
}
int main(){
   int a[7] = { 10, 20, 30, 40, 50, 60, 70 };
   int* p = 0;
   double* q = 0;
   int i = 0;
   i++;
   printf("%d\n", i);
   p++;
   printf("%u\n", p);
   q+=2;
   printf("%u\n", q);
   printf("%d\n", *a);
   printf("%d, %d\n", *(a+1), a[1]);
   printf("%d, %d\n", *(a + 4), a[4]);
   printf("%d, %d\n", *(a + 0), a[0]);

   return 0;
}