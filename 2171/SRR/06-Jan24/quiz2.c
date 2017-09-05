#include <stdio.h>
int main() {
   int cnt;
   int num;
   printf("Number of hellos! ");
   scanf("%d", &num);

   cnt = 0;
      while (cnt < num) {
         printf("Hello!\n");
         cnt++;
      }
   return 0;
}