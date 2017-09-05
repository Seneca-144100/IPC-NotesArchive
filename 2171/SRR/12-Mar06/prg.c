#include <stdio.h>
int main() {
   int num; // number of samples
   char newline; // must be newline char
   int badint; // flag to see if the int is bad
   int sample[10];  // place to hold the samples in
   int i,j; // loop counter
   do {
      badint = 1;
      newline = 'x';
      while (badint) {
         printf("Please enter number of samples: ");
         scanf("%d%c", &num, &newline);
         if (newline != '\n') {
            printf("Invalid integer, ");
            while (newline != '\n') { // flushing the keyboard
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
      printf("%d- ", i + 1);
      do {
         badint = 1;
         newline = 'x';
         while (badint) {
            printf("Please enter number of students in class: ");
            scanf("%d%c", &sample[i], &newline);
            if (newline != '\n') {
               printf("Invalid integer, ");
               while (newline != '\n') { // flushing the keyboard
                  newline = getchar();
               }
            }
            else {
               badint = 0;
            }
         }
         if (sample[i] < 0 || sample[i] > 40) {
            printf("Maximum of 40 students acceptable!, ");
         }
      } while (sample[i] < 0 || sample[i] > 40);
   }
   for (i = 0; i < num; i++) {
      printf("sample %2d |", i + 1);
      for (j = 0; j < sample[i]; j++) {
         putchar('=');
      }
      putchar('\n');
   }
  
   return 0;
}