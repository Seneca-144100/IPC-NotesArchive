#include <stdio.h>
int main(){
   int i;
   int a[20];
   for (i = 0; i < 20; i++) scanf("%d", &a[i]);
   for (i = 19; i >= 10; i--) printf("%d", a[i]);
   return 0;
}

void printInts(int nums[], int size){
   int i;
   for (i = 0; i < size; i++){
      printf("%d", nums[i]);
      if (i != size - 1) printf("\t");
   }
}

void printInts(int nums[], int size){
   int i;
   for (i = 0; i < size-1; i++){
      printf("%d\t", nums[i]);
   }
   printf("%d", nums[i]);
}

