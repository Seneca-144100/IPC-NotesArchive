
#include <stdio.h>
void printInts(int* ptr, int size);
int main(void) {
   int a[10] = { 10,20, 30, 40, 50, 60, 70, 80 ,90, 100 };
   printInts(&a[0], 10);
   return 0;
}
void printInts(int* ptr, int size) {
   int i=0;
   do {
      printf("%d ", *ptr);
      ptr++;
      i++;
   } while (i <= size); // prints the array and then garbage, because it is going own further than it is supposed to.
}
