
#include <stdio.h>
void printInts(int* ptr, int size);
struct Student {
   int stno;
   double ipc;
   double uli;
   double apc;
};
int main(void) {
   struct Student S;
   struct Student* sptr;
   sptr = &S;
   int a[10] = { 10,20, 30, 40, 50, 60, 70, 80 ,90, 100 };
   printInts(a, 10);
   printf("%d", *a);
   S.stno;
   (*sptr).stno;
   sptr->stno;
   return 0;
}
void printInts(int* ptr, int size) {
   int i=0;
   do {
      printf("%d ", ptr[i]);
      i++;
   } while (i < size);
}
