#include <stdio.h>
int rep(int* a, int* b){
   int
      ret = 0,
      v;
   if (*a > *b){
      v = *a;
      *a = *b;
      *b = v;
      ret = 1;
   }
   return ret;
}
int main(){
   int
      i = 0,
      j = 5;
   while (i < 7){
      i++;
      printf("%d, %d", i, j);
      rep(&i, &j) ? printf(" Replaced") : printf(" Not replaced");
      putchar('\n');
   }
   return 0;
}

