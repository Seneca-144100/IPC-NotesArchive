/* 
Lab 2 by Fardad Soleimanloo
17/09/2014
*/

#include <stdio.h>
int main(){
   int
      t;  /* variable for number of toonies */
   int
      l;
   int
      q;
   int
      n;
   int
      d;
   int
      p;
   double
      sum; /* the total amount of money in piggy bank in Dollars*/
   printf("Please enter the number of coins in your piggy bank:");
   printf("Toonies: ");
   scanf("%d", &t);
   
   
   
   
   
   sum = t * 2 + l + q * 0.25 + n * 0.05 + d * 0.1 + p * 0.01;
   return 0;
}