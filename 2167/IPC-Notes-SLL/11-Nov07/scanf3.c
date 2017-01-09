

#include <stdio.h>
void flushKey(void);
int main() {
   int a;
   double b;
   int ret;
   printf("Enter vals> ");
   ret = scanf("%d %lf", &a, &b);
   flushKey();
   printf("Number of values read: %d\n", ret);
   printf("int: %d\n", a);
   printf("double: %lf\n", b);
   return 0;
}

void flushKey(void) {
   while (getchar() != '\n');
}
/*
Fardad\n50\n
Fardad Soley\n50\n
Soley\n50\n
*/