#include <stdio.h>
int main(){
   int
      num; /*number of number*/
   double
      number, /*the actual numbers*/
      sum=0;    /* sum of all numbers*/
   int
      cnt = 0;
   printf("The amazing average finder program!!!\n");
   printf("please enter the number of numbers: ");
   scanf("%d", &num);
   while (cnt < num){
      printf("%d: ", cnt+1);
      scanf("%lf", &number);
      sum += number; /*sum = sum + number*/
      cnt++;
   }
   printf("The average is %.3lf\n", sum / num);
   return 0;
}