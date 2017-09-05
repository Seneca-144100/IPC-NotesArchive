#include <stdio.h>
int readLimited(int max);
int readMinMax(int low, int high);
int readInt();
void bar(int size);
void flushKeys();


int main() {
   int num;
   int sample[10];
   int i;
   printf("Please enter number of samples: ");
   num = readLimited(10);
   printf("Please enter student sample numbers:\n");
   for (i = 0; i < num; i++) {
      printf("sample %d: ", i + 1);
      sample[i] = readMinMax(5, 40);
   }
   for (i = 0; i < num; i++) {
      printf("Sample %d: ", i + 1);
      bar(sample[i]);
   }
   return 0;
}
