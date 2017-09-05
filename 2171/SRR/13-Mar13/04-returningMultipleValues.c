#include <stdio.h>

void get3digits(int theNum, int* left, int* right) {
   *right = theNum % 1000;
   *left = theNum / 1000;
}

int main(void) {
   int num, l, r;
   num = 123456;
   get3digits(num, &l, &r);
   printf("%d,%d\n", l, r);
   return 0;
}