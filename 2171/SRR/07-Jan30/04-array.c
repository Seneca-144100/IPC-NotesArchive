#include <stdio.h>

int main() {
   double gpa[5] = { 3.45,6.32,4.678,1.1,56.78 };
   int i;
   printf("%u\n", (unsigned)gpa);
   printf("%.2lf\n", gpa[3]);
   printf("%.2lf\n", gpa[0]);
   printf("%.2lf\n", gpa[2]);
   printf("%.2lf\n", gpa[200]);// garbage
   gpa[5] = 2.456;  //error
   return 0;
}