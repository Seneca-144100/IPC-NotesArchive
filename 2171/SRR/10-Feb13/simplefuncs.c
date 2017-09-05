#include <stdio.h>
/*
type funcitonName(type a, tyep b, type c) {

}

*/

int add(int a, int b) {
   int res;
   res = a + b;
   return res;
}
double findMax(double a, double b) {
   double max;
   if (a > b) max = a;
   else max = b;
   return max;
}

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
   double sum =0.0;
   int i;
   for (i = 0; i < 10; i++) {
      val = readInt();
      sum += val;
   }
   return sum / 10;
}


int main() {
   int i = 10, j = 20, k;
   double d;
   k = add(i, j);
   printf("%d\n", k);
   d = findMax(24, 16.7);
   printf("%lf\n", d);
   return 0;
}





