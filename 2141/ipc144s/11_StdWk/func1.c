#include <stdio.h>
int bar(int length);
int main(){
   int
      i = 5,
      j;
   while (i){   //(i != 0){
      j = --i % 2 == 0 ? printf("Hi") : printf("Hello");
      printf("%d\n", bar(j));
   }
   return 0;
}
int bar(int x){
   int l;
   for (l = 0; l < x; l++){
      putchar('*');
   }
   return l*2;
}
