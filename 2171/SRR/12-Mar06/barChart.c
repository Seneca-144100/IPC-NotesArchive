#include <stdio.h>
int main() {
   int num;  // number of samples
   int badint; // flag to see if the int is bad
   int sample[10];  // place to hold the samples in
   char newline; // must be newline char
   int i,j; // loop counters
   do {
      badint = 1;
      newline = 'x';
      while (badint) {
         printf("Please enter number of samples: ");
         scanf("%d%c", &num, &newline);
         if (newline != '\n') {
            printf("Invalid integer, ");
            while (newline != '\n') {
               newline = getchar();
            }
         }
         else {
            badint = 0;
         }
      }
      if (num < 0 || num > 10) {
         printf("Maximum of 10 samples acceptable!, ");
      }
   } while (num < 0 || num > 10);
   for (i = 0; i < num; i++) {
      do {
         badint = 1;
         newline = 'x';
         while (badint) {
            printf("Please enter a sample: ");
            scanf("%d%c", &sample[i], &newline);
            if (newline != '\n') {
               printf("Invalid integer, ");
               while (newline != '\n') {
                  newline = getchar();
               }
            }
            else {
               badint = 0;
            }
         }
         if (sample[i] < 0 || sample[i] > 40) {
            printf("Positive values less than 40 are acceptable!, ");
         }
      } while (sample[i] < 0 || sample[i] > 40);
   }
   for (i = 0; i < num; i++) {
      printf("sample %2d ->", i + 1);
      for (j = 0; j < sample[i]; j++) {
         putchar('=');
      }
      putchar('\n');
   }
   return 0;
}