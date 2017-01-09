

#include <stdio.h>
void flushKey(void);
int main() {
   int a;
   int ret;
   char newline = 'x';
   ret = scanf("%d%c", &a, &newline);
   if (newline != '\n') {
      if (ret <= 0) {
         printf("Can read an integer!\n");
      }
      else {
         printf("you entered extra charcters after integer\n");
      }
      flushKey();
   }
   else {
      printf("Your int is %d\n", a);
   }
   return 0;
}

void flushKey(void) {
   while (getchar() != '\n');
}
/*
10\n
*/