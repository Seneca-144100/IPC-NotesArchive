void setToTen(int* a);
void walkthrougThis(void);
#include <stdio.h>
int main(void) {
   int* p;
   int i = 200;
   p = &i;
   printf("address of i: %u\n", p);
   printf("value of i through p: %d\n", *p);
   p++;
   printf("address of integer next to i: %u\n", p);
   printf("value of integer next to i through p: %d\n", *p);
   setToTen(&i);
   printf("%d\n", i);

   return 0;
}
void setToTen(int* ptr) {
   *ptr = 10;
}
void walkthrougThis(void) {
   int i = 100;
   int* p;
   p = &i;
   *p = *p + 20;
   printf("%d", i);
}