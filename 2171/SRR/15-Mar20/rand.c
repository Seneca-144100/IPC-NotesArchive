#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
   int i;
   srand(time(NULL));
   for (i = 0; i < 10; i++)
      printf("Random number %d is %d\n", i + 1, rand()%6 + 1);
   return 0;
}