#include <stdio.h>
#include "foo.h"
int main(){
   int 
      n = 10;
   int
      m = foo(n);
   printf("%d is 3 times %d\n", m, n);
   return 0;
}
