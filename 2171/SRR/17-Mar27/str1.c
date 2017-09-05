#include <stdio.h>
int main(void) {
   char name1[41];
   char name2[41];
   name1[0] = 'F';
   name1[1] = 'r';
   name1[2] = 'e';
   name1[3] = 'd';
   name1[4] = 0; // '\0';


   // name2 = name1; wrong;
   name2[0] = name1[0];
   name2[1] = name1[1];
   name2[2] = name1[2];
   name2[3] = name1[3];
   name2[4] = name1[4];

   printf("%s\n", name1);
   printf("%s\n", name2);


   return 0;
}