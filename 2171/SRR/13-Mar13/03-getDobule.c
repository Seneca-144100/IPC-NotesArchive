#include <stdio.h>

void setTen(int* p) {
   *p = 10;
}
void getDouble(double* p) {
   printf("Please enter a double: ");
   scanf("%lf", p);
}


int main(void) {
   double d;
   getDouble(&d);
   printf("%lf\n", d);
   return 0;
}