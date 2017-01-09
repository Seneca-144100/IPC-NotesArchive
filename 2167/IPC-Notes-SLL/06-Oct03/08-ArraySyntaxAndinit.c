
#include <stdio.h>
int main(void) {
   int num[4] = { 3, 8 , 234 };
   int row[4] = { 0 };
   int i;
   for (i = 0;i < 4;i++) {
      printf("%d\n", num[i]);
   }
   // row = num; YOU CAN NOT DO THIS  BUT RATHER DO THE FOLLOWING!!!!!!!!!!!!!!!!!!!
   for (i = 0;i < 4;i++) {
      row[i] = num[i];
   }

   return 0;
}