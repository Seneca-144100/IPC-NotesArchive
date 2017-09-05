#include <stdio.h>
int main() {
   int i;
   double  d;
   float f;
   d = 34.45;
   f = 2.34;
   i = 5;
   printf("Hello there!\n");
   printf("Hello there!\n");
   // printf(HOW, what);
   printf("The integer is %d and the double is %lf\n", i, d);
   // scanf(HOW, addres of what);
   printf("Enter an integer and a double separated by space: ");
   scanf("%d %lf", &i, &d);
   printf("After scanf, ihe integer is %d and the double is %lf\n", i, d);
   return 0;
}

