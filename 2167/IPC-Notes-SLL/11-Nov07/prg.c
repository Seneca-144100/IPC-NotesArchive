#include <stdio.h>
void flushKey(void);

int main() {
   int i;
   for (i = 1; i < 20; i++) {
      printf(">%*d<\n", i, 123);
   }
   for (i = 1; i < 10; i++) {
      printf(">%*.*lf<\n", i+10,i, 123.456);
   }
   return 0;
}

void flushKey(void) {
   while (getchar() != '\n');
}
/*
10\n
*/