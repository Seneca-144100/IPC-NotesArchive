#include <stdio.h>
double aver(int NoOfNums);

int main(){
   int
      num; /*number of number*/

   printf("The amazing average finder program!!!\n");
   printf("please enter the number of numbers: ");
   scanf("%d", &num);
   printf("The average is %.3lf\n", aver(num));
   return 0;
}

double aver(int non){
   double
      res,  /*sum of all the numbers*/
      number; /*the actual numbers*/
   int
      cnt = 0;
   while (cnt < non){
      printf("%d: ", cnt + 1);
      scanf("%lf", &number);
      res += number; /*sum = sum + number*/
      cnt++;
   }
   return res/non;
}

