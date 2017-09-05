#include <stdio.h>
int readInt() {
   int a;
   char ch = 'x';
   char garbage;
   printf("Please enter an int: ");
   do {
      scanf("%d%c", &a, &ch);
      if (ch != '\n') {
         printf("Invalid integer, try again: ");
         do {
            scanf("%c", &garbage);
         } while (garbage != '\n');
      }
   } while (ch != '\n');
   return a;
}


double AverageOfTen() {
   int val;
   double sum = 0.0;
   int i;
   for (i = 0; i < 10; i++) {
      val = readInt();
      sum += val;
   }
   return sum / 10;
}


int main() {
   double val;
   val = AverageOfTen();
   printf("average is: %lf\n ", val);
   return 0;
}





