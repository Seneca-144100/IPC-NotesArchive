#include <stdio.h>
void printNums(int num[], int size);
int findMax(int num[], int size);
int main(){
   int 
      i,
      number[200],
      sum = 0,
      count;
   printf("Please enter the number of numbers to get an average for (max 200): ");
   scanf("%d", &count);
   for (i = 0; i < count; i++){
      printf("%d- Enter number: ", i+1);
      scanf("%d", &number[i]);
      sum += number[i];
   }
   printf("the average of ");
   printNums(number, count);
   printf(" is: %.3lf\n", (double)sum/count);
   printf("And the larger value entered is %d\n", findMax(number, count));
   return 0;
}
void printNums(int num[], int size){
   int i;
   for (i = 0; i < size; i++){
      printf("%d ", num[i]);
   }
}
int findMax(int num[], int size){
   int max = num[0];
   int i;
   for (i = 1; i < size; i++){
      if (num[i]>max){
         max = num[i];
      }
   }
   return max;
}
