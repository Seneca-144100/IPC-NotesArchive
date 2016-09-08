#include <stdio.h>
void prnNumbers(int num[], int size);
int findMax(int num[], int size);
int main(){
   int
      i,
      number[200],
      sum = 0,
      count;
   printf("Please enter the number of numbers (maximum of 200): ");
   scanf("%d", &count);
   for (i = 0; i < count; i++){
      printf("%d- Enter a number: ", i+1);
      scanf("%d", &number[i]);
      sum += number[i];
   }
   printf("the average of ");
   prnNumbers(number, count);
   printf(" is: %.3lf\n", (double)sum / count);
   printf("And the largest number is: %d\n", findMax(number, count));
   return 0;
}
void prnNumbers(int num[], int size){
   int i;
   for (i = 0; i < size; i++){
      printf("%d ", num[i]);
   }
}
int findMax(int num[], int size){
   int max = num[0];
   int i;
   for (i = 1; i < size; i++){
      if (num[i] > max){
         max = num[i];
      }
   }
   return max;
}

