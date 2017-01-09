
#include <stdio.h>
void printInts(int* ptr, int size);
int main(void) {
   int a[10] = { 10,20, 30, 40, 50, 60, 70, 80 ,90, 100 };
   printf("%d %d\n", a[0], *a);
   printf("%d %d\n", a[0], *(a + 0));
   printf("%d %d\n", a[1], *(a + 1));

   return 0;
}
void printInts(int* ptr, int size) {
   int i = 0;
   do {
      printf("%d ", *ptr);
      ptr++;
      i++;
   } while (i <= size); 
}
void printInts2(int* ptr, int size) {
   int i = 0;
   do {
      printf("%d ", ptr[i]);
      i++;
   } while (i <= size);
}
void printInts3(const int ptr[], int size) {
   int i = 0;
   do {
      printf("%d ", ptr[i]);
      i++;
   } while (i <= size);
}
