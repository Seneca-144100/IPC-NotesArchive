#include <stdio.h>
#include "ptr.h"

int main() {
   int a = 10;
 //  integer pointer p;
   int* p;
 //  p = locationOf a;
   p = &a;
 //  targetOf p = 25;
   *p = 25;
   printf("%d", a);
   return 0;
}






