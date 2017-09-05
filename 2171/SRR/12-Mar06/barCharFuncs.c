#include <stdio.h>
int readLimited(int max);
int readMinMax(int low, int high);
int readInt();
void bar(int size);
void flushKeys();


void flushKeys() {
   int newline = 'x';
   while (newline != '\n') { // flushing the keyboard
      newline = getchar();
   }
}
int readLimited(int max) {
   return readMinMax(0, max);
}
int readMinMax(int low, int high) {
   int ret;
   do {
      ret = readInt();
      if (ret < low || ret > high) {
         printf("number must be between %d and %d: ", low, high);
      }
   } while (ret < low || ret > high);
}
int readInt() {
   int num;
   int badint = 1;
   char newline = 'x';
   while (badint) {
      scanf("%d%c", &num, &newline);
      if (newline != '\n') {
         printf("Invalid integer, try again:");
         flushKeys();
      }
      else {
         badint = 0;
      }
   }
   return num;
}

void bar(int size) {
   int j;
   putchar('|');
   for (j = 0; j < size; j++) {
      putchar('=');
   }
   putchar('\n');
}