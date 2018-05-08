#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const char* StrCpy(char* des, const char* src) {
  int i;
  for (i = 0; src[i]; i++) {
    des[i] = src[i];
  }
  des[i] = '\0';
  return des;
}
int main(void) {
  char n1[41] = "abcdefghijklmnopq";
  char n2[41] = "Frank";
  
  printf("StrCpy returned %s\n", StrCpy(n1, n2));
  printf("and n1 is %s\n", n1);
  return 0;
}