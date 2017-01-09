#include <stdio.h>
Q3:
  int main(void) {
     int num;
     double  b;
     int i;
     printf("number of series: ");
     scanf("%d", &num);
     scanf("%lf", &b);
     for (i = 0;i < num; i++) {
        printf("%.2lf", (i + 1)* b);
     }
     printf("Porgram Ended\n");
     return 0;
  }
