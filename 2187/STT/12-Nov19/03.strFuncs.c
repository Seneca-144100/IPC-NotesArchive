#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prnStr(const char array[]) {
   int i;
   for (i = 0; array[i] != 0; i++) {
      putchar(array[i]);
   }
}
void strCpy(char des[], const char src[]) {
   int i;
   for (i = 0; src[i] != 0; i++) {
      des[i] = src[i];
   }
   des[i] = 0;
}

int strLen(const char* str) {
   int i;
   for (i = 0; str[i]; i++);
   return i;
}
//void strCat(char* des, const char* src) {
//   int dni = strLen(des);  //des null index
//   int i;
//   for (i = 0; src[i]; i++, dni++) {
//      des[dni] = src[i];
//   }
//   des[dni] = 0;
//}
void strCat(char* des, const char* src) {
   int dni = strLen(des);  //des null index
   strCpy(&des[dni], src);
}
int main(void) {
   char firstName[21] = "FRED";
   char lastName[21] = "Soley";
   char fullName[41];
   strCpy(fullName, firstName);
   strCat(fullName, " ");
   strCat(fullName, lastName);
   printf("fullname: %s\n", fullName);
   return 0;
}
