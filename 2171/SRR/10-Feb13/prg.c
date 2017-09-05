#include <stdio.h>

void setToTen(int* p) {
   *p = 10;
}

void addTwenty(double* d) {
   *d += 20;
}

int main() {
   int a, b;
   double c = 30;
   setToTen(&a);
   printf("%d\n", a);
   setToTen(&b);
   printf("%d\n", b);
   addTwenty(&c);
   printf("%lf\n", c);
   return 0;
}






