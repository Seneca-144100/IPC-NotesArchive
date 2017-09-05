#include <stdio.h>

void prnInts(int arr[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
}
void doubleIt(int arr[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      arr[i] *= 2;
   }
}

void getName(char str[]) {
   printf("Enter you name: ");
   scanf("%[^\n]", str);
}
void StrCpy(char des[], const char src[]) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}
int main(void) {
   char name[200];
   char copyOfName[200];
   int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
   getName(name);
   printf("Hello %s!", name);
   StrCpy(copyOfName, name);
   prnInts(a, 10);
   doubleIt(a, 10);
   prnInts(a, 10);
   return 0;
}