#include <stdio.h>

int main() {
   double gpa[5] = { 3.45,3.8,4.0,1.1,2.7 };
   int stno[5] = { 123234345, 234345456, 123234234, 123223423, 765456766 };
   int i = 0;
   while (i < 5) {
      printf("Stno: %d,  gpa:%.2lf\n",stno[i],  gpa[i]);
      i++;
   }
   return 0;
}