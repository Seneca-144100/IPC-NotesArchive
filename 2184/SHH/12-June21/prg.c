#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utilities.h"
//void StrCpy(char des[], const char src[]) {
//  int i;
//  for (i = 0; src[i] != 0; i++) {
//    des[i] = src[i];
//  }
//  des[i] = 0;
//}
void StrCpy(char* des, const char* src) {
  while (*des++ = *src++);
}
int main(void) {
  char str[41] = "Fardad";
  char name[41] = "abcdefghijklmnopqrstuvwxyz";

  StrCpy(name, str);

  printf("%s\n", name);

  

  return 0;
}