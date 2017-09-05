#include <stdio.h>

int readInt() {
   int a;
   char ch = 'x';
   char garbage;
   printf("Please enter an int: ");
   do {
      scanf("%d%c", &a, &ch);
      if (ch != '\n') {
         printf("Invalid integer, try again: ");
         do {
            scanf("%c", &garbage);
         } while (garbage != '\n');
      }
   } while (ch != '\n');
   return a;
}

int main() {
   int i, j, k;
   i = readInt();
   printf("you entered: %d", i);
   return 0;
}