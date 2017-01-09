#include <stdio.h>
Q2:
int main(void) {
   double a, b;
   printf("Enter two number: ");
   scanf("%lf %lf", &a, &b);
   if (a > b) {
      printf("%lf", a);
   }
   else {
      printf("%lf", b)
   }
   return 0;
}
