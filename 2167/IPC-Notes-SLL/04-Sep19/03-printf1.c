#include <stdio.h>
int main(void) {
   int age = 50;
   double sal = 123456.789;
   int iSal = sal;
   printf("I am Fardad.\nI am %d years old and make $%.2lf  a year!\n", age, sal);
   sal = iSal;
   printf("I am Fardad.\nI am %d years old and make $%.2lf  a year!\n", age, sal);
   return 0;
}