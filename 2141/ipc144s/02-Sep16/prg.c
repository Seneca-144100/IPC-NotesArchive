#include <stdio.h>
int main(){
   /*
   printf("the format string", series of variables, and another, 
           etc...)
   printf("text ? text ? text?, ...." , var1, var 2, var 3);
   where ? is a valid place holder
   %c char
   %d  int
   %ld double and many more
   
   */
   char
      ch = 'A';
   int
      age = 48;
   double
      salary = 12345678.123;
   printf("Ascii code of %c is:\ndec: %d Hex %x \n", ch, ch, ch);
   printf("He is %d year old, making %lf dollars per year\n",
      age, salary);
   return 0;
}