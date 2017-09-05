#include <stdio.h>
int main(void) {
   char name[40] = "Fred";
   double v = 123.4567;
   int i = 123;
   int j;
   putchar('X');
   putchar('\n');
   printf(">%lf<\n", v);
   printf(">%.6lf<\n", v);
   printf(">%.10lf<\n", v);
   printf(">%.2lf<\n", v);
   printf(">%.1lf<\n", v);
   printf(">%.0lf<\n", v);
   printf(">%10.2lf<\n", v);
   printf(">%010.2lf<\n", v);
   printf(">%-10.2lf<\n", v);
   printf(">%d<\n", i);
   printf(">%10d<\n", i);
   printf(">%010d<\n", i);
   printf(">%-10d<\n", i);
   printf(">%-10.5d<\n", i);

   printf(">%*d<\n",20, i);
   for (j = 10; j < 50; j += 5) {
      printf(">%*d<\n", j, i);
   }

   printf(">%10s<\n", name);
   printf(">%-10s<\n", name);
   printf(">%010s<\n", name);

   return 0;
}