#include <stdio.h>
int main() {
   char name[100] = "Fardad"; // { 'F', 'a', 'r', 'd', 'a', 'd',0 };
   int i;
   for (i = 0; name[i] != 0; i++) {
      printf("%c", name[i]);
   }
   printf("\n");
   return 0;
}