#include <stdio.h>
//#define PI 3.14156295

const double PI = 3.14156295;

int main() {
   double r, area;
   printf("Please enter the radious of a circle: ");
   scanf("%lf", &r);
   area = r * r * PI;
   printf("The area is: %.2lf\n", area);
   return 0;
}