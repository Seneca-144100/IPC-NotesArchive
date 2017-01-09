#include <stdio.h>
int main(void) {
   int age;
   double sal;
   printf("Hi Fardad, how old are you? ");
   scanf("%d", &age);
   printf("How much do you make in a year: ");
   scanf("%lf", &sal);
   printf("Fardad is %d years old and he makes $%.2lf  a year!\n", age, sal);
   return 0;
}