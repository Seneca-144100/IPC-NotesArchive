#include <stdio.h>

int main() {
   int num;
   int cnt;
   double dnum[1000];
   double sum = 0;
   double max;
   double min;
   printf("Please enter the number of double numbers: ");
   scanf("%d", &num);
   cnt = 0;
   while (cnt < num) {
      printf("%d: ", cnt + 1);
      scanf("%lf", &dnum[cnt]);
      sum += dnum[cnt];
      if (cnt == 0) {
         min = max = dnum[cnt];
      }
      else {
         if (max < dnum[cnt]) {
            max = dnum[cnt];
         }
         if (min > dnum[cnt]) {
            min = dnum[cnt];
         }
      }
      cnt++;
   }
   printf("The numbers are: \n");
   for (cnt = 0; cnt < num; cnt++) {
      printf("%.2lf ", dnum[cnt]);
   }
   printf("\n");
   printf("the average is: %.2lf\n", sum / num);
   printf("The largest number is: %.2lf\n", max);
   printf("The smallest number is: %.2lf\n", min);
   return 0;
}