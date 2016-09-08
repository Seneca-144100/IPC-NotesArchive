#include <stdio.h>
int sum(int LeftOperand, int rightOperand);
int main(){
   int
      a = 10 ,
      b = 20,
      c;
   c = sum(a, b);
   printf("the sum of %d and %d is %d\n", a, b, c);
   return 0;
}
int sum(int x, int y){
   int z;
   z = x + y;
   return z;
}