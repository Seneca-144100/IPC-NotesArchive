#include <stdio.h>
int main(void) {
   int age;
   double sal;
   printf("Please enter you age and salary: ");
   scanf("%d %lf", &age, &sal);
   printf("your are %d years old and makes $%.2lf  a year!\n", age, sal);
   return 0;
}