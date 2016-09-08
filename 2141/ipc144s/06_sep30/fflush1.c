#include <stdio.h>
int main(){
   int
      a,
      b;
   char
      c;
   printf(">");
   scanf("%d", &a);
   fflush(stdin);
   scanf("%d", &b);
   fflush(stdin);
   scanf("%c", &c);
   fflush(stdin);
   printf("%d-%d-%c-\n", a, b, c);
   return 0;
}
