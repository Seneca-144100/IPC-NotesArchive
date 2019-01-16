#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
   int i;
   for (i = 1;i < 10;i++) {
      fprintf(stdout,"%d\n", i);
   }
   return 0;
}