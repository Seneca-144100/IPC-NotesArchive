#include <stdio.h>

int main() {
   int num;
   int cnt;
   double dnum;
   double sum = 0;
   double max; 
   double min;
   printf("Please enter the number of double numbers: ");
   scanf("%d", &num);
   cnt = 0;
   while (cnt < num) {
      printf("%d: ", cnt + 1);
      scanf("%lf", &dnum);
      sum += dnum;
      if (cnt == 0) {
         min = max = dnum;
      }
      else {
         if (max < dnum) {
            max = dnum;
         }
         if (min > dnum) {
            min = dnum;
         }
      }
      cnt++;
   }
   printf("the average is: %.2lf\n", sum / num);
   printf("The largest number is: %.2lf\n", max);
   printf("The smallest number is: %.2lf\n", min);
   return 0;
}